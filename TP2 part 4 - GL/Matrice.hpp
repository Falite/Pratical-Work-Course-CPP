//
//  Matrice.hpp
//  TP2 part 4 - GL
//
//  Created by Abdoullatif Omarjee on 20/03/2024.
//

#ifndef Matrice_hpp
#define Matrice_hpp

#include "Vecteur.hpp"
#include <stdio.h>

class Matrice
{
protected:
    int m_lignes;
    int m_colonnes;
    double **m_data;
public:
    Matrice();
    Matrice(int lignes,int colonnes);
    void Remplir(int ligne,int colonne,double x);
    void affiche()const;
    Vecteur produit(Vecteur const& V);
    
};


#endif /* Matrice_hpp */
