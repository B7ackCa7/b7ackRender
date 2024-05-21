#include <fstream>
#include <iostream>
#include <string>
#include <filesystem>

namespace fs = std::filesystem;

namespace ca7Util {
    inline std::string ReadTextFromFile(const std::string& FilePath) {
        try {
            // Convert the provided path to a filesystem path
            fs::path path(FilePath);

            // If the path is not absolute, make it absolute relative to the current working directory
            if (!path.is_absolute()) {
                path = fs::absolute(path);
            }

            // Check if the file exists
            if (!fs::exists(path)) {
                std::cerr << "Error: Unable to open: " << path << std::endl;
                return ""; //or throw an exception
            }

            // Open the file
            std::ifstream file(path);
            if (!file.is_open()) {
                std::cerr << "Error: Unable to open: " << path << std::endl;
                return ""; //or throw an exception
            }

            // Read the contents of the file
            std::string sFile;
            std::string line;
            while (std::getline(file, line)) {
                sFile += line + "\n";
            }

            return sFile;
        } catch (const std::exception& e) {
            std::cerr << "Error: " << e.what() << std::endl;
            return ""; //or throw an exception
        }
    }
}


/*
#include <fstream>
#include <sstream>
#include <iostream>
#include <string>


namespace ca7Util {
    inline std::string ReadTextFromFile(std::string FilePath) {
        std::ifstream file(FilePath);
        if (!file.is_open()) {
            std::cerr << "Error: Unable to open: " << FilePath << std::endl;
            return ""; //or throw an exception
        }

        std::string sFile;
        std::string line;
        while (std::getline(file, line)) {
            sFile += line + "\n";
        }
        return sFile;
    }
}
*/