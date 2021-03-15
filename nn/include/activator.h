#ifndef ACTIVATOR_H
#define ACTIVATOR_H

#include <vector>
#include <cmath>

class Activator
{
    private:
    public:
        Activator(){}
        ~Activator(){}
        //激活函数
        double active_Sigmoid(std::vector<double> &,std::vector<double> &,double &);
        double active_Tanh(std::vector<double> &,std::vector<double> &,double &);
        double active_ReLU(std::vector<double> &,std::vector<double> &,double &);
        double active_Leaky_ReLU(std::vector<double> &,std::vector<double> &,double &,double);
};

#endif