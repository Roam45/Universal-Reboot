#include <iostream>
#include <fstream>
#include <string>

#ifdef __unix__ || __linux__ || __APPLE__
void addToPathLinux(const std::string& programPath) {
    std::string homeDir = getenv("HOME");
    std::string bashrcPath = homeDir + "/.bashrc";  // You can change to `.bash_profile` if needed

    std::ofstream bashrcFile(bashrcPath, std::ios::app);
    if (bashrcFile.is_open()) {
        bashrcFile << "\n# Added program to PATH\n";
        bashrcFile << "export PATH=\"$PATH:" << programPath << "\"\n";
        bashrcFile.close();
    } else {
        std::cerr << "Error opening .bashrc file.\n";
    }
}

int main() {
    std::string programPath = "/path/to/your/program"; // Replace with the actual path
    std::cout << "Adding program path to system PATH...\n";
    addToPathLinux(programPath);
    std::cout << "Program path added to PATH successfully!\n";
    return 0;
}
#endif

