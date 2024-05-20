#pragma once
#include <sqlite3.h>
#include <string>

class DatabaseManager {
private:
    sqlite3* db;
    char* errorMessage;

public:
    DatabaseManager(const std::string& dbName);
    ~DatabaseManager();

    void executeSQL(const std::string& sql);
    void addScenario(const std::string& name, int severity);
    void addResource(const std::string& name, int quantity);
    // Add other CRUD methods as needed
};
