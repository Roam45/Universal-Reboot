#include <iostream>
#include <cstdlib>

int main() {
    std::cout << "Rebooting system...\n";

#ifdef _WIN32
    // Windows specific reboot command
    system("shutdown /r /f /t 0");
#elif __unix__ || __linux__ || __APPLE__
    // Linux/Unix/Mac specific reboot command
    system("sudo reboot"); // This requires root privileges on Linux/macOS
#endif

    return 0;
}
