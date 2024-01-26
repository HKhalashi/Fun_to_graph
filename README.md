# Function to Graph (Fun_to_graph)

Function to Graph is a C++ application that reads a mathematical function from a text file, generates its graph using LaTeX, and outputs the result as a PDF file.

## Development Environment

This project was developed using a C++ IDE and LaTeX for graph generation. The build process is managed using CMake, ensuring a straightforward compilation and building process.

## Getting Started

These instructions will get you a copy of the project up and running on your local machine for development and testing purposes.

### Prerequisites

- C++ compiler with C++17 support
- LaTeX distribution (e.g., TeX Live, MiKTeX) with `pdflatex` command
- CMake for building the project

### Installing

Clone the repository to your local machine:

```
git clone https://github.com/your-username/Fun_to_graph.git
```
## Navigate to the project directory:
```bash
cd Fun_to_graph
```
## Create a build directory and navigate into it:
```bash
mkdir build && cd build
```
## Configure the project using CMake:
```bash
cmake ..
```
## Compile the project:
```bash
cmake --build .
```
## Running the Application
To run the application, use the following command from the project root directory:

```bash
./Fun_to_graph <input_file>
```
## Input File Format
The input file should contain a single line with the mathematical function. For example:
```latex
x^2
```
## Output

The application will generate a PDF file named `temp.pdf` containing the graph of the specified function.

## Documentation

For more details on the project's design and development process, refer to the `documentation.pdf` file included in the repository.





