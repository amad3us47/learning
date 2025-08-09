#include <windows.h>
#include <iostream>
#include <string>
#include <vector>
#include <psapi.h> // For GetModuleBaseName

int main() {
    HWND foregroundWindow = GetForegroundWindow(); // Get handle to the foreground window

    if (foregroundWindow) {
        DWORD processId;
        GetWindowThreadProcessId(foregroundWindow, &processId); // Get process ID of the window

        HANDLE processHandle = OpenProcess(PROCESS_QUERY_INFORMATION | PROCESS_VM_READ, FALSE, processId);
        if (processHandle) {
            char processName[MAX_PATH];
            if (GetModuleBaseName(processHandle, NULL, processName, sizeof(processName))) {
                std::cout << "Currently active application: " << processName << std::endl;
            } else {
                std::cerr << "Error getting process name." << std::endl;
            }
            CloseHandle(processHandle);
        } else {
            std::cerr << "Error opening process." << std::endl;
        }
    } else {
        std::cout << "No foreground window found." << std::endl;
    }

    return 0;
}
