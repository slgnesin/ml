#include "./include/perceptron.h"

double *Perceptron::train_Parameters(double &w_prev,double &b_prev,std::vector<double> &X_train,std::vector<double> &Y_train,double &d_eta,double d_minLoss,int i_maxLoop)
{
    Loss l;
    double para[2];
    if(X_train.size()!=Y_train.size())
        throw Exceptions("Size of X and Y are not Equal.");
    if(X_train.size()>0)
    {
        for(int i=0;i<X_train.size();++i)
        {
            if(l.loss_Perceptron(w_prev,b_prev,X_train[i],Y_train[i])<=0)
            {
                w_prev=Perceptron::update_Weight(w_prev,X_train[i],Y_train[i],d_eta);
                b_prev=Perceptron::update_Bias(b_prev,Y_train[i],d_eta);
            }
        }
    }
    if(l.sum_Loss_Perceptron(w_prev,b_prev,X_train,Y_train,X_train.size())>d_minLoss || i_maxLoop!=0)
    {
        i_maxLoop-=1;
        return Perceptron::train_Parameters(w_prev,b_prev,X_train,Y_train,d_eta,d_minLoss,i_maxLoop);
    }else{
        para[0]=w_prev;
        para[1]=b_prev;
        return para;
    }
}

double Perceptron::train_Paameters(std::vector<double> &W_prev,std::vector<double> &B_prev,std::vector<std::vector<double>> &X_train,std::vector<double> &Y_train,double &d_eta,double d_minLoss,int i_maxLoop)
{
    Loss l;
    return 0;
}

double Perceptron::loss_Generalization(double &w,double &b,std::vector<double> &X_train,std::vector<double> &Y_train,std::vector<double> &X_test,std::vector<double> &Y_test)
{
    Loss l;
    return abs(l.sum_Loss_Perceptron(w,b,X_train,Y_train,X_train.size())-l.sum_Loss_Perceptron(w,b,X_test,Y_test,X_test.size()));
}

