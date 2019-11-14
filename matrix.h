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
    ** TODO: Declare  constructor functions
    ** For the matrix class, you will need two constructor functions.
    ** 1. An empty constructor function
    ** 2. A constructor function that accepts a 2-dimensional vector
    */
    Matrix ();
    Matrix (std::vector< std::vector<float> >);

        /* TODO: Declare the setGrid(), getGrid(), getRows(),
    **       and getCols() functions.
    **
    **  Here are the inputs and outputs of each function:
    **  setGrid()
    **  INPUTS: 2D vector
    **  OUPUTS: void
    **
    **  getGrid()
    **  INPUTS: void
    **  OUPUTS: 2D vector
    **
    **  getRows()
    **  INPUTS: void
    **  OUTPUTS: std::vector<float>::size_type
    **
    **  getCols()
    **  INPUTS: void
    **  OUPUTS: std::vector<float>::size_type
    */
    void setGrid(std::vector <std::vector <float> >);
    std::vector <std::vector <float> > getGrid();
    std::vector <float>::size_type getRows();
    std::vector <float>::size_type getCols();
};

#endif //INC_02_MATRIXOPS_MATRIX_H
