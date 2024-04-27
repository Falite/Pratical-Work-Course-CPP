//
//  main.cpp
//  TP2 part 4 - GL
//
//  Created by Abdoullatif Omarjee on 20/03/2024.
//

#include <iostream>
#include <string>
#include "Vecteur.hpp"
#include "Matrice.hpp"
using namespace std;
#define N1 2
#define M1 2

int main() {
    
    Matrice mat1(M1,M1);
    for(int i=0;i<M1;i++){
        for(int j=0;j<M1;j++){
            mat1.Remplir(i,j,7.2*(j+1)*(i+2));
        }
    }
    mat1.affiche();
    Vecteur V(N1);
    V.Remplir(0, 3.);
    V.Remplir(1,7.);
    V.affiche();
    
    Vecteur W(N1);
    W=mat1.produit(V);
    W.affiche();
    
}
