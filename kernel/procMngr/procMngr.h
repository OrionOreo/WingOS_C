#ifndef TASK_MANAGER_H
#define TASK_MANAGER_H

#include <iostream>
#include <vector>
#include <string>

class process {
protected:
    int pid;
    std::string name;
    std::string sourceFile;

public:
    process(int pid, const std::string& name, const std::string& sourceFile) : pid(pid), name(name), sourceFile(sourceFile) {}

    int getPid() const {
        return pid;
    }

    const std::string& getName() const {
        return name;
    }

    const std::string& getSourceFile() const {
        return sourceFile;
    }
};

class ProcessManager {
private:
    std::vector<process> processes;
    int nextAvailablePid;

public:
    ProcessManager() : nextAvailablePid(0) {}

    void registerProcess(const std::string& name, const std::string& sourceFile);
    void listProcesses();
    void removeProcess(int index);
};

#endif // TASK_MANAGER_H