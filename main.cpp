#include "FunctionReader/FunctionReader.h"
#include "LaTeXGraphGenerator/LaTeXGraphGenerator.h"
#include "PDFCreator/PDFCreator.h"
#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
    // Check if a filename is provided
    if (argc != 2) {
        std::cerr << "Usage: " << argv[0] << " <filename>" << std::endl;
        return 1;
    }

    // Extract filename from command-line arguments
    std::string filename = argv[1];

    try {
        // Read the mathematical functions from the file
        FunctionReader functionReader(filename);
        std::vector<std::string> functions = functionReader.readFunctions();

        // Generate LaTeX code for each function's graph
        LaTeXGraphGenerator graphGenerator(functions);
        std::string latexCode = graphGenerator.generateGraphCode();

        // Create the PDF from the LaTeX code
        PDFCreator pdfCreator(latexCode);
        std::string outputFilePath = "./"; // Specify the output directory for the PDF
        bool result = pdfCreator.createPDF(outputFilePath);

        if (result) {
            std::cout << "PDF successfully created with multiple function graphs." << std::endl;
        } else {
            std::cerr << "Failed to create PDF." << std::endl;
            return 1;
        }
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
        return 1;
    }

    return 0;
}
