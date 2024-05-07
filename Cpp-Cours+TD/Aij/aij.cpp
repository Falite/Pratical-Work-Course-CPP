#include "AIJ.h"

AIJ::AIJ(int n,int nz,coeff* B){
    this->n=n;
    this->nz=nz;
    this->A=new coeff[nz];
    if(B!=0){
        for(int i=0;i<nz;i++){
            this->A[i]=B[i];
        }else{for(int i=0;i<nz;i++){
            this->A[i]=coeff();

        }
    }
}

AIJ::AIJ(){
    if(this->A!=0)delete[]this->A
}

AIJ::AIJ(const AIJ &other){
    this->n=other.n;
    this->nz=nz;
    this->A=new coeff[nz];
    if(this->A!=0){
        for(int i=0;i<nz;i++){
            this->A[i]=other.A[i];
        }
    }
}

AIJ& AIJ::operator=(const AIJ &other){
    if(this!=&other){
    this->n=other.n;
    this->nz=nz;
    if(this->A!=0){
        delete[] this->A;
    }
    this->A=new coeff[nz];
    for(int i=0;i<nz;i++){
        this->A[i]=other.A[i];
    }
}
}return *this;