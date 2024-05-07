#include "matAIJ.h"

matAIJ::matAIJ(int n,int m):mat(n,m){}

matAIJ::~mataIJ(){}

matAIJ::matAIJ(const matAIJ &other):mat(other.m,other.n){
    this->a=other.a
}

matAIJ& matAIJ::operator=(const matAIJ &other){
    if(this!=&other){
        this->n=other.n;
        this->m=other.m;
        this->a=other.a;
    }
    return *this;
}

void matAIJ::insert(int i,int j,double b){
    if(b!=0){
        this->a[IJ(i,j)]=b;
    }
}

void matAIJ::matve(double *x,double *y){
    map<IJ,double>::iterator it;
    for(it=a.begin();it!=a.end();it++){
        y[it->first.geti()]+=it->second*x[it->first.getj()];
    }
}