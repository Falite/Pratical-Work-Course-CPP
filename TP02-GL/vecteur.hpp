//
//  vecteur.hpp
//  TP02 GL
//
//  Created by Abdoullatif Omarjee on 13/03/2024.
//

#ifndef vecteur_hpp
#define vecteur_hpp

#include <stdio.h>

class vecteur{
private:
    double vec[3];
public:
    
    //constructeur par défaut
    vecteur(double x=0.0, double y=0.0, double z=0.0);
    
    //constructeur par copie
    vecteur(vecteur &X);
    
    //detructeur
    ~vecteur();
    
    //assignation
    vecteur& operator= (vecteur const& v);
    
    //affiche
    void affiche();
    
    //echelle
    void echelle(double facteur);
    
    //produit
    friend double produit(vecteur const& v,vecteur const& u);
    
    friend class matrice;
};


#endif /* vecteur_hpp */
