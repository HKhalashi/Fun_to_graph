// FunctionReader.cpp'FunctionReader.h' file not found
#include <string>
#include "FunctionReader.h"

// Constructor implementation
FunctionReader::FunctionReader(const std::string& filename) : filename(filename) {}

// Reads the function from the file
std::string FunctionReader::readFunction() {
    std::ifstream file(filename);
    if (!file.is_open()) {
        throw std::runtime_error("Error opening file: " + filename);
    }

    std::string function;
    getline(file, function);
    if (validateFunction(function)) {
        return function;
    } else {
        throw std::runtime_error("Invalid function format in file: " + filename);
    }
}

// Validates the function format
bool FunctionReader::validateFunction(const std::string& function) const {
    // For simplicity, this example just checks if the function is non-empty
    return !function.empty();
}

