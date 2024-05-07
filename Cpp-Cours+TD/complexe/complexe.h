#ifndef COMPLEXE_H_
#define COMPLEXE_H_

class complexe{
protected:
    double x;
    double y;
public :
    complexe(double=0.,double=0.);
    complexe(const complexe &other);
    complexe& oprator=(const complexe &other);
    virtual ~complexe();
    void setx(double);
    void sety(double);
    double getx();
    double gety();
    double real();
    double imag();
};

#endif 