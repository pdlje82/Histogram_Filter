#include <iostream>
#include <vector>
#include "matrix.h"
using namespace std;

int main () {

    // assign a 7x5 matrix to the variable initial_grid
    // all values in the matrix are 0.4
    vector <vector <float> > initial_grid (7, vector <float>(5, 0.4));

    // Use the initial grid variable to instantiate a matrix object
    // The matrix object should be called matrixa
    Matrix matrixa = Matrix(initial_grid);
    // Use the matrix_print() method to print out matrixa
    matrixa.print_p();
    // Print out the number of rows in matrixa. You will need
    // to use the getRows() function and std::cout
    cout << matrixa.getRows() << endl;
    // Print out the number of columns in matrixa
    cout << matrixa.getCols() << endl;
    // Take the transpose of matrixa and store the results in
    // a variable called transposea
    Matrix transposea = matrixa.matrix_transpose();
    // Print out transposea
    transposea.print_p();
    // Now you will use another 7x5 matrix called matrixb to
    // give the results of the matrix_addition function

    // 7x5 2-dimensional vector with values 0.2
    vector <vector <float> >  second_grid (7, vector <float>(5, 0.2));

    // Instantiate an object called matrixb. Use the second_grid
    // variable as the input to initialize matrixb
    Matrix matrixb = Matrix(second_grid);
    // TOOD: Add matrixa and matrixb. Store the results in a new matrix
    // variable called matrixsum
    Matrix matrixsum = matrixa.matrix_addition(matrixb);
    // Print out the matrix contained in the matrixsum variable
    matrixsum.print_p();
    return 0;
}