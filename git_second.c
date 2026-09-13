#include <windows.h>
#include <stdio.h>

int main() {
    char message[200];

    for (int i = 0; i < 15; i++) {
        
        sprintf(message, "Kyu re madharchod aur karo link per click!", i + 1);

        MessageBox(NULL, message, "Danger", MB_OK | MB_ICONWARNING | MB_TOPMOST | MB_SETFOREGROUND);
    }

    return 0;
}

