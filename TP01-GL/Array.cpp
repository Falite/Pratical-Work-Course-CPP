//
//  Array.cpp
//  TP01 GL
//
//  Created by Abdoullatif Omarjee on 05/03/2024.
//

#include "Array.hpp"
#include <iostream>
#include <string>
using namespace std;

Array::Array(int n){
    taille=n;
    data=new double[n];
    for(int i=0;i<taille;i++){data[i]=0;}
    cout << "objet créé "<< endl;
}

Array::~Array(){
    delete[] data;
    std::cout << "destructeur " << endl;
}

Array::Array(Array &X){
    taille=X.taille;
    for(int i=0;i<taille;i++){
        data[i]=X.data[i];
    }
}

int Array::size()const{
    return taille;
}

int Array::get(int n)const{
    return data[n];
}

void Array::set(int n,double x){
    data[n]=0;
    data[n]=x;
    cout << " la valeur " << n << " a été changée dans data par " << x << endl;
}
