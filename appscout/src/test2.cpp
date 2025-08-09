#include <windows.h>
#include <psapi.h>
#include <iostream>
#include <set>
#include <string>

std::set<DWORD> seenPIDs;

BOOL CALLBACK EnumWindowsProc(HWND hwnd, LPARAM lParam) {
    DWORD pid;
    GetWindowThreadProcessId(hwnd, &pid);

    // Check if the window is visible and has a title
    if (IsWindowVisible(hwnd)) {
        int length = GetWindowTextLengthW(hwnd);
        if (length > 0 && seenPIDs.find(pid) == seenPIDs.end()) {
            seenPIDs.insert(pid);

            HANDLE hProcess = OpenProcess(PROCESS_QUERY_INFORMATION | PROCESS_VM_READ, FALSE, pid);
            if (hProcess) {
                wchar_t exeName[MAX_PATH];
                if (GetModuleFileNameExW(hProcess, NULL, exeName, MAX_PATH)) {
                    std::wcout << exeName << std::endl;
                }
                CloseHandle(hProcess);
            }
        }
    }
    return TRUE;
}

int main() {
    EnumWindows(EnumWindowsProc, 0);
    return 0;
}

