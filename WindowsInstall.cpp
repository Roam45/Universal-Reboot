#include <iostream>
#include <cstdlib>
#include <string>

#ifdef _WIN32
#include <windows.h>
#endif

void addToPathWindows(const std::string& programPath) {
    std::string command = "setx PATH \"%PATH%;" + programPath + "\"";
    system(command.c_str());
}

int main() {
    std::string programPath = "C:\\path\\to\\your\\program"; // Replace with the actual path
    std::cout << "Adding program path to system PATH...\n";
    addToPathWindows(programPath);
    std::cout << "Program path added to PATH successfully!\n";
    return 0;
}
