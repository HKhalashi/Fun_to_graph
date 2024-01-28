#include "PDFCreator.h"
#include "../LaTeXGraphGenerator/LaTeXGraphGenerator.h"
#include <iostream>
#include <fstream>
#include <vector>

int main() {
    try {
        // Example mathematical functions
        std::vector<std::string> functions = {"sin(x)", "cos(x)", "x^2"}; // Add more functions as needed

        // Create an instance of LaTeXGraphGenerator with multiple functions
        LaTeXGraphGenerator graphGenerator(functions);

        // Generate LaTeX code for the graphs
        std::string latexCode = graphGenerator.generateGraphCode();

        // Print the generated LaTeX code
        std::cout << "Generated LaTeX Code:\n" << latexCode << std::endl;

        // Create an instance of PDFCreator
        PDFCreator pdfCreator(latexCode);

        // Directory where the PDF and temporary .tex file will be saved
        std::string outputFilePath = "./";

        // Generate PDF and check if it was successful
        bool result = pdfCreator.createPDF(outputFilePath);

        if (result) {
            std::cout << "PDF successfully created." << std::endl;
        } else {
            std::cerr << "Failed to create PDF." << std::endl;
        }
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    return 0;
}

