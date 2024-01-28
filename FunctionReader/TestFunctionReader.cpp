#include "FunctionReader.h"
#include <iostream>
#include <vector>

int main() {
    try {
        // Create an instance of FunctionReader with a test file
        FunctionReader reader("../examples/multiple_functions_3.txt"); // Replace with actual file path

        // Read the functions from the file
        std::vector<std::string> functions = reader.readFunctions();

        // Print each function
        for (const auto& function : functions) {
            std::cout << "Function read from file: " << function << std::endl;
        }
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    return 0;
}
