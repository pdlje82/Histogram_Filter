//
// Created by Jan Engelke on 14/11/2019.
//

#ifndef INC_02_MATRIXOPS_MATRIX_H
#define INC_02_MATRIXOPS_MATRIX_H
#include <vector>

class Matrix
{

private:

    std::vector< std::vector<float> > grid;
    std::vector<float>::size_type rows;
    std::vector<float>::size_type cols;

public:

    /*
    ** Declare  constructor functions
    ** For the matrix class, you will need two constructor functions.
    ** 1. An empty constructor function
    ** 2. A constructor function that accepts a 2-dimensional vector
    */
    Matrix ();
    Matrix (std::vector< std::vector<float> >);

        /* Declare the setGrid(), getGrid(), getRows(),
    **       and getCols() functions.
    **
    **  Here are the inputs and outputs of each function:
    **  setGrid()
    **  INPUTS: 2D vector
    **  OUPUTS: void
    */
    void setGrid(std::vector <std::vector <float> >);
    /*
    **  getGrid()
    **  INPUTS: void
    **  OUPUTS: 2D vector
    */
    std::vector <std::vector <float> > getGrid();
    /*
    **  getRows()
    **  INPUTS: void
    **  OUTPUTS: std::vector<float>::size_type
    */
    std::vector <float>::size_type getRows();
    /*
    **  getCols()
    **  INPUTS: void
    **  OUPUTS: std::vector<float>::size_type
    */
    std::vector <float>::size_type getCols();
    /*
    ** Declare the matrix_addition function
    ** INPUTS: a Matrix
    ** OUTPUTS: a Matrix
    */
    Matrix matrix_addition(Matrix);
    /* Declare the matrix_print function
    ** INPUTS: none
    ** OUTPUTS: none
    */
    void print_p(std::vector< std::vector<float> >);
};

#endif //INC_02_MATRIXOPS_MATRIX_H
