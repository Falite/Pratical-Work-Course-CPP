//
//  Array.hpp
//  TP01 GL
//
//  Created by Abdoullatif Omarjee on 05/03/2024.
//

#ifndef Array_hpp
#define Array_hpp

#include <stdio.h>
#include <iostream>
// partie 2 :
class Array{
    //question a)
    protected :   //attributs privés
    int taille;
    double *data;
    
    public :
    //constructeur
    Array(int n);
    
    //detructeur
    ~Array();
    
    //Bonus : constructeur par copie
    Array(Array &X);
    
    //question b) autres fonctions
    int size()const;            //la terminaison "const" nous assure que rien ne sera modifié en mémoire
    int get(int n)const;        // quand la fonction est appelée.
    void set(int n,double x);
    
};
#endif /* Array_hpp */
