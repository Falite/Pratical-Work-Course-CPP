//
//  puissance.cpp
//  TP02 GL
//
//  Created by Abdoullatif Omarjee on 14/03/2024.
//

#include "puissance.hpp"
#include "matrice.hpp"
#include "vecteur.hpp"
#include <iostream>
#include <string>
using namespace std;

double puissance(matrice A,vecteur w,int n){
    vecteur res(w);
    vecteur res2;
    double facteur(1.0);
    double resfinal(0.0);
    
    for(int i=0;i<n;i++){
        res=A * res ;
        facteur= res * res ;
        res* (1./facteur) ;
    } //on a calculé wn
    
    
    res2=A * res ;
    resfinal = ( res * res2 )/ (res * res) ; //on calcule la limite finale
    
    return resfinal;
}
