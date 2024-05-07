//
//  mat.cpp
//  CM-GL-Mat
//
//  Created by Abdoullatif Omarjee on 11/03/2024.
//

#include "mat.hpp"
mat::mat(int n, int m) {
    this->n=n;
    this->m=m;
}

mat::~mat() {
}

mat::mat(const mat &other) {
        this->n=other.n;
        this->m=other.m;
}

mat& mat::operator=(const mat &other) {
  if (this!=&other){
    this->n=other.n;
    this->m=other.m;
  }
  return *this;
}
