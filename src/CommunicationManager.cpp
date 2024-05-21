#include "CommunicationManager.h"
#include <iostream>

void CommunicationManager::sendNotification(const std::string& message) {
    std::cout << "Sending Notification: " << message << std::endl;
}
