// FunctionReader.h
#ifndef FUNCTIONREADER_H
#define FUNCTIONREADER_H

#include <string>
#include <fstream>
#include <stdexcept>
#include <vector>

class FunctionReader {
public:
    // Constructor
    FunctionReader(const std::string& filename);

    // Method to read functions from the file
    std::vector<std::string> readFunctions();

private:
    std::string filename;

    // Validates the function read from the file
    bool validateFunction(const std::string& function) const;
};

#endif // FUNCTIONREADER_H
