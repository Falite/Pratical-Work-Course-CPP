#include <iostream>
#include <stdio.h>
#include <vector>

#ifndef integreScheme_hpp
#define integreScheme_hpp

template<class T> 
class integreScheme {
protected:
    double h;
    double atol;
    double rtol;
    double t0;
    double tf;
    T x0;
    map<int,vector<double> > a;
    T (*ptf)(double,T);
public :
    integreScheme();
    ~integreScheme();
    integreScheme(integreScheme const& autre);
    integreScheme& operator=(integreScheme const& autre);
    void setInitialCondition(T x0);  
    void setTolerances(double atol,double rtol);
    void setStepSize(double h);
    void setptf(T(*ptf)(double,T)){this->ptf=ptf};
    virtual vector<T> integreTimeIntervalle(double t0,double tf,int k)=0;
    double localeErreur(int k);
    T newton(T x0);
    virtual void affiche()=0; //elle est pure

};

#endif
