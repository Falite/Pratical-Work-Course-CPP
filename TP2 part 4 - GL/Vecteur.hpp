//
//  Vecteur.hpp
//  TP2 part 4 - GL
//
//  Created by Abdoullatif Omarjee on 20/03/2024.
//

#ifndef Vecteur_hpp
#define Vecteur_hpp

#include <stdio.h>
class Vecteur
{
protected:
    int m_taille;
    double* m_data ;
public:
    Vecteur();
    Vecteur(int taille=0);
    ~Vecteur();
    void Remplir(int i,double x);
    void affiche();
    void echelle(double fact);
    friend double produit(Vecteur const& V,Vecteur const& U);
    friend class Matrice;
};

#endif /* Vecteur_hpp */
