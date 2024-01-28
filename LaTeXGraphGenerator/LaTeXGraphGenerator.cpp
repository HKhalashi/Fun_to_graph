// LaTeXGraphGenerator.cpp
#include "LaTeXGraphGenerator.h"
#include <cmath> // Include cmath for M_PI

LaTeXGraphGenerator::LaTeXGraphGenerator(const std::vector<std::string>& functions) : functions(functions) {}

std::string LaTeXGraphGenerator::generateGraphCode() const {
    std::string latexCode;
    latexCode += "\\documentclass{article}\n";
    latexCode += "\\usepackage{pgfplots}\n";
    latexCode += "\\pgfplotsset{compat=newest}\n";
    latexCode += "\\usepackage{amsmath}\n";
    latexCode += "\\usepackage{tikz}\n";
    latexCode += "\\begin{document}\n";

    for (const auto& function : functions) {
        latexCode += generateSingleGraphCode(function);
        latexCode += "\\newpage\n"; // Start a new page for each function's graph
    }

    latexCode += "\\end{document}";
    return latexCode;
}

std::string LaTeXGraphGenerator::generateSingleGraphCode(const std::string &function) const {
    std::string singleGraphCode;
    singleGraphCode += "\\begin{tikzpicture}\n";
    singleGraphCode += "\\begin{axis}[\n";
    singleGraphCode += "xlabel=$x$,\n";
    singleGraphCode += "ylabel={$f(x)$},\n";
    singleGraphCode += "ylabel style={rotate=-90},\n";
    singleGraphCode += "legend style={\n";
    singleGraphCode += "at={(1.05,1)},\n"; // Adjusts the position of the legend
    singleGraphCode += "anchor=north west,\n"; // Anchors the legend at the top left
    singleGraphCode += "align=left,\n"; // Aligns the text to the left
    singleGraphCode += "font=\\footnotesize\n"; // Sets the font size
    singleGraphCode += "},\n";
    singleGraphCode += "domain=-2*pi:2*pi, samples=200, grid=both,\n";
    singleGraphCode += "trig format=rad,\n"; // Ensures pgfplots interprets trig functions in radians
    singleGraphCode += "]\n";
    singleGraphCode += "\\addplot[blue] {";
    singleGraphCode += function; // The actual function
    singleGraphCode += "};\n";
    singleGraphCode += "\\addlegendentry{$f(x)=";
    singleGraphCode += function; // The function's formula
    singleGraphCode += "$}\n";
    singleGraphCode += "\\end{axis}\n";
    singleGraphCode += "\\end{tikzpicture}\n";
    return singleGraphCode;
}


