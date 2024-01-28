#include "LaTeXGraphGenerator.h"
#include <iostream>
#include <vector>

int main() {
    try {
        // Example mathematical functions
        std::vector<std::string> functions = {"cos(x)", "sin(x)", "x^2"}; // Add more functions as needed

        // Create an instance of LaTeXGraphGenerator with multiple functions
        LaTeXGraphGenerator graphGenerator(functions);

        // Generate LaTeX code for the graphs
        std::string latexCode = graphGenerator.generateGraphCode();

        // Print the generated LaTeX code
        std::cout << "Generated LaTeX Code:\n" << latexCode << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    return 0;
}
