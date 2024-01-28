// LaTeXGraphGenerator.h
#ifndef LATEXGRAPHGENERATOR_H
#define LATEXGRAPHGENERATOR_H

#include <string>
#include <vector>

class LaTeXGraphGenerator {
public:
    // Constructor
    explicit LaTeXGraphGenerator(const std::vector<std::string>& functions);

    // Generates the LaTeX code for the graphs
    std::string generateGraphCode() const;

private:
    std::vector<std::string> functions;

    std::string generateSingleGraphCode(const std::string &function) const;
};

#endif // LATEXGRAPHGENERATOR_H
