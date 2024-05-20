#include "DisasterScenario.h"

DisasterScenario::DisasterScenario(const std::string& name, int severity) : name(name), severity(severity) {}

void DisasterScenario::saveToDatabase(DatabaseManager& dbManager) {
    dbManager.addScenario(name, severity);
}
