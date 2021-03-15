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
    vector<vector<double>> mat;
    vector<double> tmp;
    for(int i=0;i<3;++i)
    {
        for(int j=0;j<5;++j)
        {
            if(i==0)
            {
                tmp.push_back(i+j);
            }else{
                tmp[j]+=2;
            }
        }
        mat.push_back(tmp);
    }
    for(int i=0;i<3;++i)
    {
        for(int j=0;j<5;++j)
        {
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"--------------------"<<endl;

    Matrix m;
    vector<vector<double>> mat_trans=m.mat_Transpose(mat);

    for(int i=0;i<mat_trans.size();++i)
    {
        for(int j=0;j<mat_trans[0].size();++j)
        {
            cout<<mat_trans[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}