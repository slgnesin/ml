#include "./include/activator.h"

double Activator::active_Sigmoid(std::vector<double> &w,std::vector<double> &x,double &b)
{
    double y_raw=0;
    for(int i=0;i<w.size();++i)
    {
        y_raw+=w[i]*x[i];
    }
    y_raw+=b;
    return 1/(1+exp(y_raw));
}

double Activator::active_Tanh(std::vector<double> &w,std::vector<double> &x,double &b)
{
    double y_raw=0;
    for(int i=0;i<w.size();++i)
    {
        y_raw+=w[i]*x[i];
    }
    y_raw+=b;
    return (exp(y_raw)-exp(-y_raw))/(exp(y_raw)+exp(-y_raw));
}

double Activator::active_ReLU(std::vector<double> &w,std::vector<double> &x,double &b)
{
    double y_raw=0;
    for(int i=0;i<w.size();++i)
    {
        y_raw+=w[i]*x[i];
    }
    y_raw+=b;
    return y_raw>0?y_raw:0;
}

double Activator::active_Leaky_ReLU(std::vector<double> &w,std::vector<double> &x,double &b,double a=0.01)
{
    double y_raw=0;
    for(int i=0;i<w.size();++i)
    {
        y_raw+=w[i]*x[i];
    }
    y_raw+=b;
    return y_raw>0?y_raw:a*y_raw; 
}