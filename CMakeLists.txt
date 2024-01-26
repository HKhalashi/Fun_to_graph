cmake_minimum_required(VERSION 3.22.1)
project(Fun_to_graph)

set(CMAKE_CXX_STANDARD 17)

# Define the main executable
add_executable(Fun_to_graph main.cpp
        FunctionReader/FunctionReader.cpp
        FunctionReader/FunctionReader.h
        LaTeXGraphGenerator/LaTeXGraphGenerator.cpp
        LaTeXGraphGenerator/LaTeXGraphGenerator.h
        PDFCreator/PDFCreator.cpp
        PDFCreator/PDFCreator.h
        ErrorHandler.cpp
        ErrorHandler.h)

# Define the test executable for FunctionReader
add_executable(TestFunctionReader
        FunctionReader/TestFunctionReader.cpp
        FunctionReader/FunctionReader.cpp
        FunctionReader/FunctionReader.h)

# Define the test executable for LaTeXGraphGenerator
add_executable(TestLaTeXGraphGenerator
        LaTeXGraphGenerator/TestLaTeXGraphGenerator.cpp
        LaTeXGraphGenerator/LaTeXGraphGenerator.cpp
        LaTeXGraphGenerator/LaTeXGraphGenerator.h)

# Define the test executable for PDFCreator
add_executable(TestPDFCreator
        PDFCreator/TestPDFCreator.cpp
        LaTeXGraphGenerator/LaTeXGraphGenerator.cpp
        LaTeXGraphGenerator/LaTeXGraphGenerator.h
        PDFCreator/PDFCreator.cpp
        PDFCreator/PDFCreator.h)
