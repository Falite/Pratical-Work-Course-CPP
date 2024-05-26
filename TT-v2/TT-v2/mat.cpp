//
//  mat.cpp
//  TT-v2
//
//  Created by Abdoullatif Omarjee on 26/05/2024.
//

#include "mat.hpp"

mat::mat(int n,int m):m(m),n(n) {}
/*
mat::mat(mat const& autre){
    this->n=autre.n;
    this->m=autre.m;
}
*/
mat& mat::operator=(mat const& autre){
    if(this!=&autre){
        this->n=autre.n;
        this->m=autre.m;
    }
    return *this;
}

mat::~mat(){}
