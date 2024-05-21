#include "DatabaseManager.h"
#include "DisasterScenario.h"
#include "ResourceInventory.h"
#include "CommunicationManager.h"

int main() {
    DatabaseManager dbManager("disaster.db");
    DisasterScenario scenario("Earthquake", 8);
    ResourceInventory resource("Medical Supplies", 100);
    CommunicationManager commManager;

    scenario.saveToDatabase(dbManager);
    resource.saveToDatabase(dbManager);
    commManager.sendNotification("Disaster alert: Earthquake detected!");

    return 0;
}
