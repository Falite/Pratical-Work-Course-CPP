//
//  main.cpp
//  TP01 GL
//
//  Created by Abdoullatif Omarjee on 05/03/2024.
//

#include <iostream>
#include <stdio.h>
#include <cmath>     //on en a besoin pour avoir pi "via leur acos"
#include "Array.hpp"
#define N 16     //On définit un int N constant égal à 16
using namespace std;
//partie 1

using namespace std;

//on en a besoin
double pi = acos(-1);

//question a)
double function(double x){
    return x*x-3*x;
}

//question c)
double quadrature(double fonction(double),double a,double b,double* X,double* W,int n){
    double res=0.;
    double fact=(b-a)/2;
    for(int i=0;i<n;i++){
        res+=fact*fonction(((b-a)*X[i]+(b+a))/2)*W[i];
    }
    return res;
}

// petite fonction pour afficher un tableau
void afficher(double *X){
    for(int i=0;i<N;i++){
        cout << X[i] << " " ;
    }
    cout << endl;
}

int main() {
    //question b)
    //On aurait pu faire une seule boucle pour remplir les deux tableaux en même temps…
    double* X = new double[N+1];     //important : un pointeur se déclare de la sorte : une étoile * et un "new" pour 
    for(int i=0;i<N;i++){            // allouer la mémoire
        double fact;
        fact=(2. * i+ 1. )/( 2. * N + 2. );    
        X[i]=cos( fact *pi) ;
    }
    double *W = new double[N+1];
        for(int i=0;i<N;i++){
            W[i] = pi/(N+1) * sqrt( 1-X[i]*X[i] );
        }
    
    afficher(X);
    afficher(W);

    //question d)
    //on demande à l'utilisateur d'entrer les bornes que l'on souhaite
    double a;double b
    cout << "entrez la borne inférieure" << endl;
    cin >> a;
    cout << "entre la borne supérieure, la borne inférieure est a = " << a << endl;
    cin >> b;

    //on teste la quadrature
    if(a<b){
        double résultat = quadrature(a,b,X,W,N);
    }
    else{
        cout << "borne supérieure inférieure à la borne inférieure : a= " << a  << endl;
        cin >> b;
    }
    
    //partie 2 : modification du code pour stocker les éléments de X et W dans des Array
    Array X_array(N+1);
    Array W_array(N+1);
    //on fait tout dans la même boucle car nous sommes des hipsters
    for(int i=0,i<N,i++){
        double fact;
        fact=(2. *i + 1.)/( 2.* N + 2.);    
        X_array.set(i, fact * pi );
        W_array.set(i, pi/(N+1) * sqrt( 1-X[i]*X[i] ) );
    }

    //On affiche les tableaux : 
    cout << "X = " ;
    for(int j = 0 , j< X.size() , j++){
        cout << X.get(i) << " " <<
    }
    cout << endl;

    cout << "W = " ;
    for(int j = 0 , j< W.size() , j++){
        cout << W.get(i) << " " <<
    }
    cout << endl;
    
    return 0;
}
