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

class Array{
    protected :
    int taille;
    double *data;
    
    public :
    //constructeur
    Array(int n);
    
    //detructeur
    ~Array();
    
    //constructeur par copie
    Array(Array &X);
    
    //autres fonctions
    int size()const;
    int get(int n)const;
    void set(int n,double x);
    
};
#endif /* Array_hpp */
