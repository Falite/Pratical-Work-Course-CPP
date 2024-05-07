//
//  matDense.cpp
//  CM-GL-Mat
//
//  Created by Abdoullatif Omarjee on 11/03/2024.
//
#include "mat.hpp"
#include "matDense.hpp"
#include <string>
#include <iostream>

matDense::matDense(int n, int m) : mat(n,m) {
this->ptcoef= new double [n*m];
}


matDense::matDense(const matDense &other) : mat(other.n, other.m) {
    this->ptcoef= new double [n*m];
    for (int i=0; i<n*m; i++){
        this->ptcoef[i]=other.ptcoef[i];
    }

}

matDense& matDense::operator=(const matDense &other) {
       if (this!=&other){
        this->m=other.m;
        this->n=other.n;
       delete [] this->ptcoef;
       this->ptcoef= new double [n*m];
        for (int i=0; i<n*m; i++){
            this->ptcoef[i]=other.ptcoef[i];
        }
       }
        return *this;
}
matDense::~matDense() {
}

void matDense::load(std::string name){
    std::ifstream file(name.c_str(), std::ios::in);
    file >> this->n >> this->m,
    if(this->ptcoef !=0){
        delete[] ptcoef;
        
    }
    ptcoef=new double[this->n*this->m];
    for(int i=0;i<this->n*thi->m;i++){
        file >> ptcoef[i];
    }
    file.close();
}
void matDense::save(std::string name){
    std::ofstream file(name.c_str(),ios::out);
    file << this->n <<" "<< this->m << std::endl;
    for(int i=0; i<this->n*this->m;i++){
        file << ptcoef[i]<<std::endl ;
    }
    file.close();
}
