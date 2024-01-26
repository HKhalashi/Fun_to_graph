// PDFCreator.cpp
#include "PDFCreator.h"
#include <fstream>
#include <cstdlib>

// Constructor implementation
PDFCreator::PDFCreator(const std::string& latexCode) : latexCode(latexCode) {}

// Generates a PDF from the LaTeX code
bool PDFCreator::createPDF(const std::string& outputFilePath) const {
    // Write the LaTeX code to a temporary .tex file
    std::string tempTexFilePath = "temp.tex";
    std::ofstream tempTexFile(tempTexFilePath);
    if (!tempTexFile.is_open()) {
        return false;
    }
    tempTexFile << latexCode;
    tempTexFile.close();

    // Call the LaTeX engine to generate the PDF
    std::string command = "pdflatex -output-directory=" + outputFilePath + " " + tempTexFilePath;
    int result = std::system(command.c_str());

    // Remove the temporary .tex file
    std::remove(tempTexFilePath.c_str());

    // Check the result of the LaTeX compilation
    return result == 0;
}
