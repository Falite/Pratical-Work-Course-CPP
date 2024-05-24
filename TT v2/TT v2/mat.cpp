/*
 * mat.cpp
 *
 *  Created on: 4 mars 2024
 *      Author: dtromeur
 */

#include "mat.h"

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

