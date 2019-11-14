//
// Created by Jan Engelke on 14/11/2019.
//

#include "matrix.h"

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
    std::vector <std:: vector <float> > initial_grid (10, std::vector <float>(4, 0.0));
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
Matrix::Matrix(std::vector<std::vector<float> > initial_grid) {
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
void Matrix::setGrid(std::vector <std::vector <float> > new_grid) {
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
std::vector <std::vector <float> > Matrix::getGrid() {
    return grid;
}
std::vector <float>::size_type Matrix::getRows() {
    return rows;
}
std::vector <float>::size_type Matrix::getCols() {
    return cols;
}