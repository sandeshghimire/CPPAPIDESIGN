//
// Created by Sandesh Ghimire on 1/7/2017.
//

#ifndef PROJECT_MATRIX_H
#define PROJECT_MATRIX_H

#include <iostream>
#include <vector>

namespace SG
{
    class Matrix {
    private:
        int _Rows;
        int _Column;

        std::vector <int> rows;
        std::vector <int> column;

        const unsigned  int kTestData {0b11110011};
        const unsigned  int kBigNumber {1123343};

    public:
        int get_Rows() const;

        int get_Rolumn() const;

        int  MaxNumber(unsigned int firstNumber, unsigned int secondNumber);

    public:
        virtual ~Matrix();

        Matrix(int rows, int column);

    protected:
        bool state;

    };
}

#endif //PROJECT_MATRIX_H
