#include "PDFCreator.h"
#include "../LaTeXGraphGenerator/LaTeXGraphGenerator.h"
#include <iostream>
#include <fstream>

int main() {
    try {
        // Example mathematical function
        std::string function = "x^2"; // Replace this with different functions to test

        // Create an instance of LaTeXGraphGenerator and generate LaTeX code
        LaTeXGraphGenerator graphGenerator(function);
        std::string latexCode = graphGenerator.generateGraphCode();

        // Print the generated LaTeX code (for debugging purposes)
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
