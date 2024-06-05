#include "task_manager.h"

int main() {
    ProcessManager pm;
    pm.registerProcess("Test", "Test.exe");
    pm.registerProcess("Tester", "Tester.exe");
    pm.registerProcess("Tested", "Tested.exe");
    pm.registerProcess("Friend!", "Friend.exe");

    pm.listProcesses();

    // Remove process at index 1
    pm.removeProcess(1);

    pm.listProcesses();


    pm.registerProcess("Tester", "Tester.exe");

    pm.listProcesses();

    return 0;
}