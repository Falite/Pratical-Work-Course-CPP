#include "coeff.h"

coeff::coeff(int i,int j,double aij){
    this->i=i;
    this->j=j;
    this->aij=aij;
}

coeff::~coeff(){

}

coeff::coeff(coeff const& other){
    this->i=other.i;
    this->j=other.j;
    this->aij=other.aij;
}

coeff& coeff::operator=(const coeff &other){
    if(this!=&other){
        this->i=other.i;
        this->j=other.j;
        this->aij=other.aij;
    }
    return *this; 
}