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
    taille=n;                  //cette syntaxe est correcte : le compilateur reconnaît l'attribut "taille" 
    data=new double[n];        // et l'attribut "data" de la classe Array, mais vous pouvez utiliser des this-> aussi
    for(int i=0;i<taille;i++){data[i]=0;}
    cout << "objet créé "<< endl;
}

Array::~Array(){
    delete[] data;          //obligatoire pour libérer la mémoire allouée, attention à la syntaxe
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
