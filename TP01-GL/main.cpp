//
//  main.cpp
//  TP01 GL
//
//  Created by Abdoullatif Omarjee on 05/03/2024.
//

#include <iostream>
#include <stdio.h>
#include <cmath>
#include <iostream>
#include "Array.hpp"
#define N 16

using namespace std;

double pi = acos(-1);

double function(double x){
    return x*x-3*x;
}

double quadrature(double fonction(double),double a,double b,double* X,double* W,int n){
    double res=0.;
    double fact=(b-a)/2;
    for(int i=0;i<n;i++){
        res+=fact*fonction(((b-a)*X[i]+(b+a))/2)*W[i];
    }
    return res;
}

void afficher(double *X){
    for(int i=0;i<N;i++){
        cout << X[i] << " " ;
    }
    cout << endl;
}

int main() {
    double* X = new double[N+1];
    for(int i=0;i<N;i++){
        float fact;
        fact=(2.*i+1.)/(2.*N+2.);
        X[i]=cos(fact*pi);
    }
    double *W = new double[N+1];
        for(int i=0;i<N;i++){
            W[i]=pi/(N+1)*sqrt(1-X[i]*X[i]);
        }
    
    afficher(X);
    afficher(W);
    
    Array A(3);
    A.set(1,1);
    A.set(2,2);
    A.set(3,3);
    A.get(2);
    
    return 0;
}
