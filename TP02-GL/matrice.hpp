//
//  matrice.hpp
//  TP02 GL
//
//  Created by Abdoullatif Omarjee on 14/03/2024.
//

#ifndef matrice_hpp
#define matrice_hpp
#include "vecteur.hpp"
#include <stdio.h>
class matrice{
private:
    double mat[9];
    
public:
    //constructeur
    matrice(double x11, double x12, double x13,
            double x21, double x22, double x23,
            double x31, double x32, double x33);
    matrice( matrice &A);
    ~matrice();
    void affiche();
    void affichedeuxzero();
    vecteur produit(vecteur const& b);
    
};
#endif /* matrice_hpp */
