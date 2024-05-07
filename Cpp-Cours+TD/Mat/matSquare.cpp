//
//  matSquare.cpp
//  CM-GL-Mat
//
//  Created by Abdoullatif Omarjee on 11/03/2024.
//


#include "matSquare.hpp"
#include "mat.hpp"

matSquare::matSquare(int n) : mat(n,n) {
}

matSquare::matSquare(const matSquare &other) : mat(other.n,other.n) {
}

matSquare& matSquare::operator=(const matSquare &other) {
    if (this!=&other){
        this->n=other.n;
        this->m=other.m;
    }
    return *this;
}


matSquare::~matSquare() {
    // TODO Auto-generated destructor stub
}
