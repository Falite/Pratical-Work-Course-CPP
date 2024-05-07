#ifndef COEFF_H_
#define COEFF_H_
class coeff{
protected:
   int i;
   int j;
   double aij;
public:
   coeff(int i=0,int j=0,double aij=0);
   ~coeff();
   operator=(const coeff &other);
}