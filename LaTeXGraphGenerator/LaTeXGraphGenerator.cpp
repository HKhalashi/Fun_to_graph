// LaTeXGraphGenerator.cpp
#include "LaTeXGraphGenerator.h"

LaTeXGraphGenerator::LaTeXGraphGenerator(const std::string& function) : function(function) {}

std::string LaTeXGraphGenerator::generateGraphCode() const {
    std::string latexCode;
    latexCode += "\\documentclass{standalone}\n";
    latexCode += "\\usepackage{pgfplots}\n";
    latexCode += "\\pgfplotsset{compat=newest}\n";
    latexCode += "\\usepackage{tikz}\n";
    latexCode += "\\begin{document}\n";
    latexCode += "\\begin{tikzpicture}\n";
    latexCode += "\\begin{axis}[\n";
    latexCode += "xlabel=$x$,\n";
    latexCode += "ylabel={$y$}]\n";
    latexCode += "\\addplot [domain=-10:0] {-1};\n"; // For x < 0
    latexCode += "\\addplot [domain=0:10] {1};\n";   // For x >= 0
    latexCode += "\\end{axis}\n";
    latexCode += "\\end{tikzpicture}\n";
    latexCode += "\\end{document}";
    return latexCode;
}




