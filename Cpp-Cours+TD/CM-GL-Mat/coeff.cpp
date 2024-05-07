//
//  coeff.cpp
//  CM-GL-Mat
//
//  Created by Abdoullatif Omarjee on 18/03/2024.
//

#include "coeff.hpp"
#include <iostream>
using namespace std;
#include "matSquare.hpp"
#include "matDense.hpp"

coeff:coeff(int i,int j,double a){
    this->i=i;
    this->j=j;
    this->a=a;
}

coeff::coeff(const coeff &other){
    this->i=other.i;
    this->j=other.j;
    this->a=other.a;
}

coeff& coeff::operator<<(std::iostream &sortis, coeff &other){
    if(this !=&other){
        this->i=other.i;
        this->j=other.j;
        this->a=other.a;
    }
    return *this;
}

std::ostream &operator(std::ostream &sortie,coeff &a){
    sortie<<"["<<a.i<<","<<a.j<<"]"<<a.aij<<std::endl;
    return sortie;
}

std::ostream &operator(std::ostream &entree,coeff &a){
    entree >> "["<<a.i<<","<<a.j<<"]"<<a.aij<<std::endl;
    return sortie;
}

