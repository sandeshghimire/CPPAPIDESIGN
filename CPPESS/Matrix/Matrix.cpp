//
// Created by Sandesh Ghimire on 1/7/2017.
//


#include "Matrix.h"

namespace SG
{

    Matrix::Matrix(int rows, int column) {
        this->_Rows = rows;
        this->_Column = column;

        std::cout << "Name of this function is "  << __func__ <<" Today is " <<__DATE__ << std::endl;

    }

    Matrix::~Matrix() {


    }

    int Matrix::get_Rows() const {
        return this->_Rows;
    }

    int Matrix::get_Rolumn() const {
        return this->_Column;
    }

    int  Matrix::MaxNumber(unsigned int firstNumber, unsigned int secondNumber) {

        if( firstNumber > secondNumber)
            return firstNumber;
        else
            return secondNumber;

    }
}
