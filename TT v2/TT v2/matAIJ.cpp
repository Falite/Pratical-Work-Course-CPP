/*
 * matAIJ.cpp
 *
 *  Created on: 8 avr. 2024
 *      Author: dtromeur
 */

#include "matAIJ.h"
template<typename T>
int matAIJ<T>::compteur = 0;

template<typename T>
matAIJ<T>::matAIJ(int n, int m) : mat(n,m) {
    ++compteur;
}

template<typename T>
matAIJ<T>::~matAIJ() {
    --compteur;
}

template<typename T>
matAIJ<T>::matAIJ(const matAIJ &other) : mat(other.n, other.m) {
	this->a=other.a;
    ++compteur;
}

template<typename T>
matAIJ<T>& matAIJ<T>::operator=(const matAIJ<T> &other) {
	if (this!=&other){
		this->n=other.n;
		this->m=other.m;
		this->a=other.a;
	}
    ++compteur;
    return *this;
}

template<typename T>
void matAIJ<T>::insert(int i, int j, T b){
	if (b!=0){
		this->a[IJ(i,j)]=b;
	}
}


template<typename T>
void matAIJ<T>::matve(T *x, T *y){
	for (auto it=a.begin(); it!=a.end(); it++){
		y[it->first.geti()]+=it->second*x[it->first.getj()];
	}











}
