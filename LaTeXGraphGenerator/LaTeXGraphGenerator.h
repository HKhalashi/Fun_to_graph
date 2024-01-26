// LaTeXGraphGenerator.h
#ifndef LATEXGRAPHGENERATOR_H
#define LATEXGRAPHGENERATOR_H

#include <string>

class LaTeXGraphGenerator {
public:
    // Constructor
    explicit LaTeXGraphGenerator(const std::string& function);

    // Generates the LaTeX code for the graph
    std::string generateGraphCode() const;

private:
    std::string function;
};

#endif // LATEXGRAPHGENERATOR_H

