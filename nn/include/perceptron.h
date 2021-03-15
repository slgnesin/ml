#ifndef PERCEPTRON_H
#define PERCEPTRON_H

#include <vector>

#include "loss.h"
#include "activator.h"
#include "exceptions.h"

class Perceptron
{
    private:
        double eta;
        double weight_raw;
        double bias_raw;
    public:
        Perceptron(){}
        Perceptron(double &d_eta,double &d_weight_raw,double &d_bias_raw):eta(d_eta),weight_raw(d_weight_raw),bias_raw(d_bias_raw){}
        ~Perceptron(){}

        //获取学习率eta,参数w,b
        double get_eta(){return eta;}
        double get_weight_raw(){return weight_raw;}
        double get_bias_raw(){return bias_raw;}

        //更新权重
        double update_Weight(double &w_prev,double &x,double &y,double &d_eta)
        {
            return w_prev+d_eta*y*x;
        }
        double update_Bias(double &b_prev,double &y,double &d_eta)
        {
            return b_prev+d_eta*y;
        }

        //训练数据并估计参数，当损失函数不大于d_minLoss或最大循环次数i_maxLoop衰减为0时停止
        double *train_Parameters(double &w_prev,double &b_prev,std::vector<double> &X_train,std::vector<double> &Y_train,double &d_eta,double d_minLoss,int i_maxLoop);
        
        double train_Paameters(std::vector<double> &W_prev,std::vector<double> &B_prev,std::vector<std::vector<double>> &X_train,std::vector<double> &Y_train,double &d_eta,double d_minLoss,int i_maxLoop);

        //泛化能力，根据训练好的参数w/b对训练集和测试集进行检验
        double loss_Generalization(double &w,double &b,std::vector<double> &X_train,std::vector<double> &Y_train,std::vector<double> &X_test,std::vector<double> &Y_test);
};

#endif