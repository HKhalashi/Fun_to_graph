#include "ErrorHandler.h"
#include <iostream>

// Handle file-related errors
void ErrorHandler::handleFileError(const std::string& filename) {
    std::cerr << "Error: Unable to access file '" << filename << "'" << std::endl;
}

// Handle parsing errors
void ErrorHandler::handleParsingError(const std::string& expression) {
    std::cerr << "Error: Parsing error in expression '" << expression << "'" << std::endl;
}

// Handle LaTeX generation errors
void ErrorHandler::handleLatexGenerationError(const std::string& details) {
    std::cerr << "Error: LaTeX generation error - " << details << std::endl;
}
