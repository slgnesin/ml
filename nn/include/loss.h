#ifndef LOSS_H
#define LOSS_H

#include <vector>

class Loss{
    private:
    public:
        Loss(){}
        ~Loss(){}
        //感知机损失函数
        double loss_Perceptron(double &w,double &b,double &x,double &y_real);
        double sum_Loss_Perceptron(double &w,double &b,std::vector<double> &X,std::vector<double> &Y_real,int data_Size);
};

#endif