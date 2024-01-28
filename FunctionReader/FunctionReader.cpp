// FunctionReader.cpp'FunctionReader.h' file not found
#include "FunctionReader.h"

// Constructor implementation
FunctionReader::FunctionReader(const std::string& filename) : filename(filename) {}

// Reads functions from the file
std::vector<std::string> FunctionReader::readFunctions() {
    std::ifstream file(filename);
    if (!file.is_open()) {
        throw std::runtime_error("Error opening file: " + filename);
    }

    std::vector<std::string> functions;
    std::string function;
    while (getline(file, function)) {
        if (validateFunction(function)) {
            functions.push_back(function);
        } else {
            throw std::runtime_error("Invalid function format in file: " + filename);
        }
    }
    return functions;
}

// Validates the function format
bool FunctionReader::validateFunction(const std::string& function) const {
    // Check if the function is non-empty
    if (function.empty()) {
        return false;
    }

    // Check if the filename extension is .txt
    std::string extension = ".txt";
    if (filename.size() >= extension.size() &&
        filename.compare(filename.size() - extension.size(), extension.size(), extension) == 0) {
        return true;
    } else {
        return false;
    }
}
