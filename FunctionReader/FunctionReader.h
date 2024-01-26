// FunctionReader.h
#ifndef FUNCTIONREADER_H
#define FUNCTIONREADER_H

#include <string>
#include <fstream>
#include <stdexcept>

class FunctionReader {
public:
    // Constructor
    FunctionReader(const std::string& filename);

    // Method to read the function from the file
    std::string readFunction();

private:
    std::string filename;

    // Validates the function read from the file
    bool validateFunction(const std::string& function) const;
};

#endif // FUNCTIONREADER_H

