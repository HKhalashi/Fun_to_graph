#include "FunctionReader.h"
#include <iostream>

int main() {
    try {
        // Create an instance of FunctionReader with a test file
        FunctionReader reader("../examples/combined_function.txt"); // Replace with actual file path

        // Read the function from the file
        std::string function = reader.readFunction();

        // Print the function
        std::cout << "Function read from file: " << function << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    return 0;
}

