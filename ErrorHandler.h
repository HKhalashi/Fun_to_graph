#ifndef ERRORHANDLER_H
#define ERRORHANDLER_H

#include <string>
#include <stdexcept>

// ErrorHandler class definition
class ErrorHandler {
public:
    // Function to handle file-related errors
    static void handleFileError(const std::string& filename);

    // Function to handle parsing errors
    static void handleParsingError(const std::string& expression);

    // Function to handle LaTeX generation errors
    static void handleLatexGenerationError(const std::string& details);
};

#endif // ERRORHANDLER_H
