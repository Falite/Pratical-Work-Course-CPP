//
//  vecteur.hpp
//  TP02 GL
//
//  Created by Abdoullatif Omarjee on 13/03/2024.
//

#ifndef vecteur_hpp
#define vecteur_hpp

#include <stdio.h>

//Partie 1 : 
class vecteur{
private: //question a)
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
    
    //question b) echelle
    void echelle(double facteur);
    
    //question c) produit
    friend double produit(vecteur const& v,vecteur const& u);   //l'amitié se déclare de la sorte, elle permet de faire des opérations 
                                                                //de plusieurs objets de la même classe

    //Bonus : surcharge des opérateurs
    void operator*(double facteur);                            //même fonction que échelle
    friend double operator*(vecteur const& v,vecteur const& u);//même fonction que produit
    friend class matrice;
};


#endif /* vecteur_hpp */
