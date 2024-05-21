#pragma once
#include "DatabaseManager.h"

class DisasterScenario {
private:
    std::string name;
    int severity;

public:
    DisasterScenario(const std::string& name, int severity);
    void saveToDatabase(DatabaseManager& dbManager);
};
