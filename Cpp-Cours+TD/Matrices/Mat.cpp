//
//  Mat.cpp
//  Matrices
//
//  Created by Abdoullatif Omarjee on 04/03/2024.
//

#include "Mat.hpp"

mat::mat(int n=1,int m=1){
    this->n=n;
    this->m=m;
}
virtual ~mat()

mat::mat(const mat &other){
    this->n=other.n;
    this->m=othet.m;
}
mat& mat::operator=(const mat &other){
    if(this!=&other){
        this->n=other.n;
        this->m=other.m;
    }
    return *this;
}
