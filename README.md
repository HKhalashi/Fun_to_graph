# Function to Graph (Fun_to_graph)

Function to Graph is a C++ application that reads mathematical functions from a text file, generates their graphs using LaTeX, and outputs the results as a PDF file with each function's graph on a separate page.

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

git clone https://github.com/HKhalashi/Fun_to_graph.git
### Navigate to the project directory:
```bash
cd Fun_to_graph
```
### Create a build directory and navigate into it:
```bash
mkdir build && cd build
```
### Configure the project using CMake:
```bash
cmake ..
```
### Compile the project:
```bash
cmake --build .
```
## Running the Application
To run the application, use the following command from the project root directory:
```bash
./Fun_to_graph <input_file>
```
## Input File Format
The input file should be a .txt file containing mathematical functions, each on a separate line. For example:
```latex
sin(x)
cos(x)
x^2
```
## Output
The application will generate a PDF file named temp.pdf in the current directory containing the graphs of the specified functions, each on a separate page.
## Documentation
For more details on the project's design and development process, refer to the documentation.pdf file included in the repository.
