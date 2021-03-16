#ifndef MATRIX_H
#define MATRIX_H

#include <vector>

//矩阵操作，定义矩阵加乘、转置、求秩、特征值等运算
class Matrix
{
    private:
    public:
    //行列式求值
    double determinant_Eval(std::vector<std::vector<double>> &mat_A);
    //转置
    std::vector<std::vector<double>> matrix_Transpose(std::vector<std::vector<double>> &mat_A);
    //乘法
    std::vector<std::vector<double>> matrix_Multiply(std::vector<std::vector<double>> &mat_A,std::vector<std::vector<double>> &mat_B);
};

#endif