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
};

#endif //INC_02_MATRIXOPS_MATRIX_H
