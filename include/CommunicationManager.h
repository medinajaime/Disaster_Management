#pragma once
#include <sqlite3.h>

class DatabaseManager {
private:
    SQLite::Database db;

public:
    DatabaseManager(const std::string& dbName);
    ~DatabaseManager();

    void addScenario(const std::string& name, int severity);
    void addResource(const std::string& name, int quantity);
    // Add other CRUD methods as needed
};
