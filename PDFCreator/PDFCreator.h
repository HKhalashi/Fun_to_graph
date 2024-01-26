// PDFCreator.h
#ifndef PDFCREATOR_H
#define PDFCREATOR_H

#include <string>

class PDFCreator {
public:
    // Constructor
    explicit PDFCreator(const std::string& latexCode);

    // Generates a PDF from the LaTeX code
    bool createPDF(const std::string& outputFilePath) const;

private:
    std::string latexCode;
};

#endif // PDFCREATOR_H


