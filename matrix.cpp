//
// Created by Jan Engelke on 14/11/2019.
//
#include<iostream>
#include "matrix.h"
using namespace std;

/* TODO: Define the default constructor. Remember the syntax is
**      Classname::ClassName() {
**
**          initialize variables
**
**       }
**
**      You need to initialize the grid variable to a default value such as
**      a 4x4 matrix with all zeros.
**
**      Then initialize the rows variable, and the cols variable using the
**      vector size method. For example myvector.size() will give the size of
**      a vector. For a 2-dimensional vector, myvector.size() would be the
**      number of rows in a matrix.
**
*/
Matrix::Matrix() {
    vector < vector <float> > initial_grid (10, vector <float>(4, 0.0));
    grid = initial_grid;
    rows = grid.size();
    cols = grid[0].size();
}
/* TODO: Define a constructor that receives a 2-Dimensional vector
**       and assigns the vector to the grid variable.
**
**      Remember the syntax is
**      Classname::ClassName(datatype inputvariablename) {
**
**          classvariable = inputvariablename
**
**       }
**
**      Then initialize the rows variable, and the cols variable exactly
**      as you did for the default constructor.
**
*/
Matrix::Matrix(vector<vector<float> > initial_grid) {
    grid = initial_grid;
    rows = initial_grid.size();
    cols = initial_grid[0].size();
}
/*
** TODO: Define a function setGrid()
**   INPUTS: a 2-D vector
**   OUPUTS: void
**
**   This function receives a 2-D vector representing a matrix, and then
**    updates the grid, rows, and cols variables
**
*/
void Matrix::setGrid(vector <vector <float> > new_grid) {
    grid = new_grid;
    rows = new_grid.size();
    cols  = new_grid[0].size();
}
/*
** TODO: Define getGrid(), getRows(), and getCols() functions.
**    INPUTS: None of these functions have inputs
**    OUPUTS: Each function should return its respective variable
**            For example, getRows returns the rows variable
*/
vector <vector <float> > Matrix::getGrid() {
    return grid;
}
vector <float>::size_type Matrix::getRows() {
    return rows;
}
vector <float>::size_type Matrix::getCols() {
    return cols;
}

/* TODO: Define a matrix_addition function
**   INPUT: a matrix
**   OUPUT: the sum of the grid variable and the input matrix
**
** STEPS:
**  1. check that the matrix in the grid variable
**     and the input matrix have the same size
**
**     if not, throw an error like
**         throw std::invalid_argument("matrices are not the same size");
**
** 2. add the matrices together and return
**       the result as a Matrix. You can do this part
**       with nested for loops. If you use an intermediate
**       vector to store a row, the vector.clear()
**       method might be useful.
**
*/
vector <vector <float> > matrix_addition(vector <vector <float> > mat1, vector <vector <float> > mat2) {
    vector <vector <float> > mat_res(mat1.size(), vector <float> (mat1[0].size(), 0.0));
    for (int row = 0; row < mat1.size(); row++) {
        for (int col = 0; col < mat1[0].size(); col++) {
            mat_res[row][col] = mat1[row][col] + mat2[row][col];
        }
    }
    return mat_res;
}
/* TODO: Define a matrix_print function
** This function has no inputs and no outputs
** The purpose of the function is to display the matrix in
** the terminal using std::cout.
*/
void Matrix::print_p(vector <vector<float> > mat){
    for (int row = 0; row < mat.size(); row++){
        for (int col = 0; col < mat[0].size(); col++) {
            cout << mat[row][col] << " ";
        }
        cout << endl;
    }
}