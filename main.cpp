#include <iostream>
#include <vector>

#include "./nn/include/exceptions.h"
#include "./nn/include/loss.h"
#include "./nn/include/activator.h"
#include "./nn/include/perceptron.h"
#include "./nn/include/matrix.h"

using namespace std;

int main()
{
    vector<vector<double>> mat_a,mat_b;
    vector<double> tmp;

    for(int i=0;i<5;++i)
    {
        for(int j=0;j<3;++j)
        {
            if(i==0)
            {
                //只需要在第一行对tmp有push_back操作
                tmp.push_back(i+j);
            }else{
                //在非第一行的条件下对tmp的操作仅是修改原有的值
                tmp[j]+=2;
            }
        }
        mat_a.push_back(tmp);
    }

    tmp.clear();

    for(int i=0;i<3;++i)
    {
        for(int j=0;j<4;++j)
        {
            if(i==0)
            {
                tmp.push_back(i+j);
            }else{
                tmp[j]+=2;
            }
        }
        mat_b.push_back(tmp);
    }

    //打印
    
    for(int i=0;i<mat_a.size();++i)
    {
        for(int j=0;j<mat_a[0].size();++j)
        {
            cout<<mat_a[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"--------------------"<<endl;

    for(int i=0;i<mat_b.size();++i)
    {
        for(int j=0;j<mat_b[0].size();++j)
        {
            cout<<mat_b[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"--------------------"<<endl;
    

    //transpose
    Matrix m;
    /*
    vector<vector<double>> mat_trans=m.mat_Transpose(mat_a);
    */

    vector<vector<double>> mat_mul=m.matrix_Multiply(mat_a,mat_b);

    for(int i=0;i<mat_mul.size();++i)
    {
        for(int j=0;j<mat_mul[0].size();++j)
        {
            cout<<mat_mul[i][j]<<" ";
        }
        cout<<endl;
    }
   
    return 0;
}