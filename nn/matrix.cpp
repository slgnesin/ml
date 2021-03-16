#include "./include/matrix.h"

//行列式求值
double Matrix::determinant_Eval(std::vector<std::vector<double>> &mat_A)
{
    if(mat_A.size()!=mat_A[0].size())
    {
        std::cout<<"It's not a Legal Determinant"<<std::endl;
    }else{
        //https://www.jianshu.com/p/99b9ac1c6162
    }
    return 0;
}

//矩阵转置
std::vector<std::vector<double>> Matrix::matrix_Transpose(std::vector<std::vector<double>> &mat_A)
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

std::vector<std::vector<double>> Matrix::matrix_Multiply(std::vector<std::vector<double>> &mat_A,std::vector<std::vector<double>> &mat_B)
{
    if(mat_A[0].size()!=mat_B.size())
        throw Exceptions("Size of two Matrixes are not match.");
    
    std::vector<double> vec_tmp;
    std::vector<std::vector<double>> mat_C;
    double d_sum(0);

    //icol_a=irow_b
    /*a[0][0]b[0][0]+a[0][1]b[1][0],...*/
    for(int irow_a=0;irow_a<mat_A.size();++irow_a)
    {
        for(int icol_b=0;icol_b<mat_B[0].size();++icol_b)
        {
            for(int irow_b=0;irow_b<mat_B.size();++irow_b)
            {
                d_sum+=mat_A[irow_a][irow_b]*mat_B[irow_b][icol_b];
            }
            vec_tmp.push_back(d_sum);
            d_sum=0;
        }
        mat_C.push_back(vec_tmp);
        vec_tmp.clear();
    }
    
    return mat_C;
}