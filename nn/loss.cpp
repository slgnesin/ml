#include "./include/loss.h"
#include "./include/exceptions.h"

double Loss::loss_Perceptron(double &w,double &b,double &x,double &y_real)
{
    return y_real*(w*x+b);
}

double Loss::sum_Loss_Perceptron(double &w,double &b,std::vector<double> &X,std::vector<double> &Y_real,int data_Size)
{
    if(X.size()!=Y_real.size())
        throw Exceptions("Size of X and Y_real are not Euqal.");
    if(1>data_Size)
    {
        return 0;
    }else{
        return (w*X[data_Size-1]+b)*Y_real[data_Size-1]+sum_Loss_Perceptron(w,b,X,Y_real,data_Size-1);
    }
}