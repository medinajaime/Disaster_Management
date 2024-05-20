#include "ResourceInventory.h"

ResourceInventory::ResourceInventory(const std::string& name, int quantity) : name(name), quantity(quantity) {}

void ResourceInventory::saveToDatabase(DatabaseManager& dbManager) {
    dbManager.addResource(name, quantity);
}
