//
//  vecteur.cpp
//  TP02 GL
//
//  Created by Abdoullatif Omarjee on 13/03/2024.
//
#include <iostream>
#include "vecteur.hpp"
#include <string>
using namespace std;

//partie 1 :
//question a)
vecteur::vecteur(double x, double y, double z){
    vec[0]=x; vec[1]=y; vec[2]=z;
    //cout << "objet créé " << endl;
}

vecteur::vecteur(vecteur &X){
    for(int i=0;i<3;i++){
        X.vec[i]=vec[i];
    }
    //cout << " copieur copieur il a copié wesh " << endl;
}

vecteur::~vecteur(){
    //cout << " MACRON DESTRUCTION " << endl;
}

void vecteur::affiche(){
    for(int i=0;i<3;i++){
        cout << vec[i] << " " ;
    }
    cout << endl;
}

vecteur& vecteur::operator= (vecteur const& v){
    if(this != &autre){
        for(int i=0;i<3;i++){
        vec[i]=v.vec[i];    
        }
    }
    return *this ;
}

//question b) 
void vecteur::echelle(double facteur){
    for(int i=0;i<3;i++){
        vec[i]*=facteur;     //c'est la même chose que vec[i]= vec[i]*facteur
    }
    //cout << " le facteur est passé " << endl;
}


double produit(vecteur const& v,vecteur const& u){
    double res(0);
    for(int i=0;i<3;i++){
        res+=u.vec[i]*v.vec[i];
    }
    return res;
}

void vecteur::operator*(double facteur){
    for(int i=0;i<3;i++){
        vec[i]*=facteur;
    }
}

double operator*(vecteur const& v,vecteur const& u){
    double res(0);
    for(int i=0;i<3;i++){
        res+=u.vec[i]*v.vec[i];
    }
    return res;
}
