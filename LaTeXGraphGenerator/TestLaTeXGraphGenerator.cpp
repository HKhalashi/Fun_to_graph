#include "LaTeXGraphGenerator.h"
#include <iostream>

int main() {
    try {
        // Example mathematical function
        std::string function = "x^2"; // Replace this with different functions to test

        // Create an instance of LaTeXGraphGenerator
        LaTeXGraphGenerator graphGenerator(function);

        // Generate LaTeX code for the graph
        std::string latexCode = graphGenerator.generateGraphCode();

        // Print the generated LaTeX code
        std::cout << "Generated LaTeX Code:\n" << latexCode << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    return 0;
}

