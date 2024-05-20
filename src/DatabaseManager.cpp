#include "DatabaseManager.h"
#include <iostream>

DatabaseManager::DatabaseManager(const std::string& dbName) {
    int rc = sqlite3_open(dbName.c_str(), &db);
    if (rc) {
        std::cerr << "Can't open database: " << sqlite3_errmsg(db) << std::endl;
        sqlite3_close(db);
    } else {
        std::cout << "Opened database successfully" << std::endl;
    }

    // Create tables if they don't exist
    executeSQL("CREATE TABLE IF NOT EXISTS Scenarios (ID INTEGER PRIMARY KEY AUTOINCREMENT, Name TEXT NOT NULL, Severity INTEGER NOT NULL);");
    executeSQL("CREATE TABLE IF NOT EXISTS Resources (ID INTEGER PRIMARY KEY AUTOINCREMENT, Name TEXT NOT NULL, Quantity INTEGER NOT NULL);");
}

DatabaseManager::~DatabaseManager() {
    sqlite3_close(db);
}

void DatabaseManager::executeSQL(const std::string& sql) {
    int rc = sqlite3_exec(db, sql.c_str(), 0, 0, &errorMessage);
    if (rc != SQLITE_OK) {
        std::cerr << "SQL error: " << errorMessage << std::endl;
        sqlite3_free(errorMessage);
    } else {
        std::cout << "SQL executed successfully" << std::endl;
    }
}

void DatabaseManager::addScenario(const std::string& name, int severity) {
    std::string sql = "INSERT INTO Scenarios (Name, Severity) VALUES ('" + name + "', " + std::to_string(severity) + ");";
    executeSQL(sql);
}

void DatabaseManager::addResource(const std::string& name, int quantity) {
    std::string sql = "INSERT INTO Resources (Name, Quantity) VALUES ('" + name + "', " + std::to_string(quantity) + ");";
    executeSQL(sql);
}
