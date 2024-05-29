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

//Partie 2 : classe matrice
class matrice{
private:
//question a)
    double mat[9];
    
public:
    
    matrice(double x11, double x12, double x13,
            double x21, double x22, double x23,
            double x31, double x32, double x33);
    matrice( matrice &A);
    ~matrice();
    void affiche();
    void affichedeuxzero();

    //question b) 
    vecteur produit(vecteur const& b);      //il faut déclarer Matrice comme étant une classe amie de la classe vecteur 
                                            //, et ce à l'interieur du vecteur.h

    //Bonus : surcharge de l'opérateur * pour un produit matrice vecteur
    vecteur operator*(vecteur const& V);
};
#endif /* matrice_hpp */
