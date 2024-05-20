#pragma once
#include "DatabaseManager.h"

class ResourceInventory {
private:
    std::string name;
    int quantity;

public:
    ResourceInventory(const std::string& name, int quantity);
    void saveToDatabase(DatabaseManager& dbManager);
};
