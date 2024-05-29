//
//  matrice.cpp
//  TP02 GL
//
//  Created by Abdoullatif Omarjee on 14/03/2024.
//

#include <iostream>
#include "matrice.hpp"
#include "vecteur.hpp"
#include <string>
using namespace std;

matrice::matrice(double x11, double x12, double x13,
        double x21, double x22, double x23,
        double x31, double x32, double x33){
    mat[0]=x11; mat[1]=x12; mat[2]=x13;
    mat[3]=x21; mat[4]=x22; mat[5]=x23;
    mat[6]=x31; mat[7]=x32; mat[8]=x33;
    //cout << "la matrice a été crée , pillule bleue ou rouge ? " << endl;
}

matrice::matrice(matrice &A){
    for(int i=0;i<9;i++){
        mat[i]=A.mat[i];
    }
    //cout << " un copieur est dans la matrice AAH " << endl;
}

matrice::~matrice(){
    //cout << " MACRON DECAPITATION " << endl;
}

void matrice::affiche(){
    for(int i=0;i<3;i++){
        cout << mat[i] << " ";
    }
    cout << endl;
    for(int i=3;i<6;i++){
        cout << mat[i] << " ";
    }
    cout << endl;
    for(int i=6;i<9;i++){
        cout << mat[i] << " ";
    }
    cout << endl;
}

void matrice::affichedeuxzero(){
    for(int i=0;i<9;i++){
        cout << mat[i] << " ";
        if(i/3 !=0 && i/3 !=1){
            cout << endl;
        }
    }
}

vecteur matrice::produit( vecteur const&b){
    vecteur RES;
    for(int i=0;i<3;i++){
        RES.vec[0]+=mat[i]*b.vec[0];
    }
    for(int i=3;i<6;i++){
        RES.vec[1]+=mat[i]*b.vec[1];
    }
    for(int i=6;i<9;i++){
        RES.vec[2]+=mat[i]*b.vec[2];
    }
    
    return RES;
}

vecteur matrice::operator*(vecteur const& V){
    vecteur RES;
    for(int i=0;i<3;i++){
        RES.vec[0]+=mat[i]*V.vec[0];
    }
    for(int i=3;i<6;i++){
        RES.vec[1]+=mat[i]*V.vec[1];
    }
    for(int i=6;i<9;i++){
        RES.vec[2]+=mat[i]*V.vec[2];
    }
    return RES;
}
