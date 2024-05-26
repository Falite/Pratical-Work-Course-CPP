//
//  matAIJ.hpp
//  TT-v2
//
//  Created by Abdoullatif Omarjee on 26/05/2024.
//

#ifndef matAIJ_hpp
#define matAIJ_hpp

#include <stdio.h>
#include "IJ.hpp"
#include "mat.hpp"
#include <vector>
#include <map>

//Question 2 :
template<typename T>
class matAIJ : public mat {
protected:
    std::map<IJ,T> m_map;    //pour stocker les valeurs de notre matrice
    
public:
    //forme canonique :
    matAIJ(int n=1,int m=1);
    matAIJ(matAIJ const& autre);
    matAIJ& operator=(matAIJ const& autre);
    ~matAIJ();
    
    //Question 3 : On initialise toujours le compteur de la sorte, décléré statique
    static int compteur;
    
    //Question 8 : méthodes pour pouvoir appeler la surcharge de "<<" pour les objets matAIJ
    int getn();
    int getm();
    T getvalue(int i,int j);
    
    //Question 5 :
    void add(int i,int j, T aij);
    
    //Question 6 :
    std::vector<T> matve(std::vector<T> x);
};

//Question 8: l'entête d'une surcharge de "<<" est toujours la même : 
template<typename T>
std::ostream& operator<<(std::ostream& flux, matAIJ<T> const& autre);

#endif /* matAIJ_hpp */
