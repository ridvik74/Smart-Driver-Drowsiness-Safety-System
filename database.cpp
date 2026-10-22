#include <iostream>
#include <string>
#include <sqlite3.h>
using namespace std;

sqlite3 *db = NULL;

void openDatabase()
{
    int result = sqlite3_open("driver.db", &db);

    if (result != SQLITE_OK)
    {
        cout << "Database could not be opened." << endl;
        return;
    }

    const char *sql =
        "CREATE TABLE IF NOT EXISTS history ("
        "id INTEGER PRIMARY KEY AUTOINCREMENT, "
        "name TEXT, "
        "event INTEGER);";

    char *message = NULL;

    result = sqlite3_exec(db, sql, NULL, NULL, &message);

    if (result != SQLITE_OK)
    {
        cout << "Table creation failed." << endl;

        if (message != NULL)
            sqlite3_free(message);
    }
}

void saveEvent(string name, int event)
{
    if (db == NULL)
        return;

    sqlite3_stmt *stmt = NULL;

    const char *sql =
        "INSERT INTO history (name, event) VALUES (?, ?);";

    if (sqlite3_prepare_v2(db, sql, -1, &stmt, NULL) != SQLITE_OK)
        return;

    sqlite3_bind_text(stmt, 1, name.c_str(), -1, SQLITE_TRANSIENT);
    sqlite3_bind_int(stmt, 2, event);

    sqlite3_step(stmt);
    sqlite3_finalize(stmt);
}

void showDatabaseRecords(string name)
{
    if (db == NULL)
        return;

    sqlite3_stmt *stmt = NULL;

    const char *sql =
        "SELECT id, name, event FROM history "
        "WHERE name = ? ORDER BY id;";

    if (sqlite3_prepare_v2(db, sql, -1, &stmt, NULL) != SQLITE_OK)
        return;

    sqlite3_bind_text(stmt, 1, name.c_str(), -1, SQLITE_TRANSIENT);

    cout << "\n--- Database Records for " << name << " ---" << endl;

    while (sqlite3_step(stmt) == SQLITE_ROW)
    {
        cout << "ID: " << sqlite3_column_int(stmt, 0);
        cout << "  Name: "
             << sqlite3_column_text(stmt, 1);
        cout << "  Event: "
             << sqlite3_column_int(stmt, 2) << endl;
    }

    sqlite3_finalize(stmt);
}

int getDatabaseEvents(int arr[], int max, string name)
{
    if (db == NULL || max <= 0)
        return 0;

    sqlite3_stmt *stmt = NULL;
    int count = 0;

    const char *sql =
        "SELECT event FROM history WHERE name = ? ORDER BY id;";

    if (sqlite3_prepare_v2(db, sql, -1, &stmt, NULL) != SQLITE_OK)
        return 0;

    sqlite3_bind_text(stmt, 1, name.c_str(), -1, SQLITE_TRANSIENT);

    while (count < max && sqlite3_step(stmt) == SQLITE_ROW)
    {
        arr[count] = sqlite3_column_int(stmt, 0);
        count++;
    }

    sqlite3_finalize(stmt);
    return count;
}

void closeDatabase()
{
    if (db != NULL)
    {
        sqlite3_close(db);
        db = NULL;
    }
}
