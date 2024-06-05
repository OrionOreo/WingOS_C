#include "task_manager.h"

// Implementations of the ProcessManager class methods
void ProcessManager::registerProcess(const std::string& name, const std::string& sourceFile) {
    processes.push_back(process(nextAvailablePid, name, sourceFile));
    nextAvailablePid++;
}

void ProcessManager::listProcesses() {
    for(const auto& p : processes) {
        std::cout << "PID: " << p.getPid() << " Name: " << p.getName() << " Source File: " << p.getSourceFile() << std::endl;
    }
}

void ProcessManager::removeProcess(int index) {
    if (index >= 0 && index < processes.size()) {
        processes.erase(processes.begin() + index);
    }
}