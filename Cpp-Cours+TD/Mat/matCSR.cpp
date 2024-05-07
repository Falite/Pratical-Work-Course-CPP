//
//  matCSR.cpp
//  CM-GL-Mat
//
//  Created by Abdoullatif Omarjee on 11/03/2024.
//

#include "matCSR.hpp"

int matCSR::compteur=0;

matCSR::matCSR(int n=1,int m=1, int NbMaxElem=1) : mat(n,m){
    this->nbMaxElem=nbMaxElem;
    this->ptA=new double[nbMaxElem];
    this->ptC= new int[nbMaxElem];
    this->ptL=new[n+1];
}
matCSR::virtual ~matCSR();
matCSR::matCSR(const matCSR &other) : mat(other.n,other.m){
    this->nbMaxElem=other.nbMaxElem;
    this->ptA=new double[other.nbMaxElem];
    this->ptC= new int[other.nbMaxElem];
    this->ptL=new[other.n+1];
    
    for(int i=0;i<other.n+1;i++){
        this->ptL[i]=other.ptL[i];
    }
    for(int i=0;i<other.nbMaxElem;i++){
        this->ptA[i]=other.ptA[i];
        this->ptC[i]=other.ptC[i];
    }
    
};
matCSR &matCSR::operator=(const matCSR &other){
    if(this!=&other){
        delete[] ptL;
        delete[] ptA;
        delete[] ptC;
        this->n=other.n;
        this->m=other.m;
        
        this->nbMaxElem=nbMaxElem;
        this->ptA=new double[nbMaxElem];
        this->ptC= new int[nbMaxElem];
        this->ptL=new[n+1];
        
        for(int i=0;i<other.n+1;i++){
            this->ptL[i]=other.ptL[i];
        }
        for(int i=0;i<other.nbMaxElem;i++){
            this->ptA[i]=other.ptA[i];
            this->ptC[i]=other.ptC[i];
        }
        
    }
    return *this;
};

matCSR::~matCSR(){
    delete[] ptL;
    delete[] ptA;
    delete[] ptC;
}

matCSR::compteurCSR(){
    
}
