#include "./include/matrix.h"

//矩阵转置
std::vector<std::vector<double>> Matrix::mat_Transpose(std::vector<std::vector<double>> &mat_A)
{
    std::vector<double> vec_tmp;
    std::vector<std::vector<double>> mat_trans;

    for(int i_col=0;i_col<mat_A[0].size();++i_col)
    {
        for(int i_row=0;i_row<mat_A.size();++i_row)
        {
            vec_tmp.push_back(mat_A[i_row][i_col]);
        }
        mat_trans.push_back(vec_tmp);
        vec_tmp.clear();
    }
    return mat_trans;
}

std::vector<std::vector<double>> Matrix::mat_Multiply(std::vector<std::vector<double>> &mat_A,std::vector<std::vector<double>> &mat_B)
{
    std::vector<std::vector<double>> mat_C;
    return mat_C;
}