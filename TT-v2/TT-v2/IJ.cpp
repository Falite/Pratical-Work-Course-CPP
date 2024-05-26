//
//  IJ.cpp
//  TT-v2
//
//  Created by Abdoullatif Omarjee on 26/05/2024.
//

#include "IJ.hpp"

IJ::IJ(int i,int j):j(j),i(i) {}

IJ::IJ(IJ const& autre){
    this->i=autre.i;
    this->j=autre.j;
}
IJ& IJ::operator=(IJ const& autre){
    if(this!=&autre){
        this->i=autre.i;
        this->j=autre.j;
    }
    return *this;
}
IJ::~IJ(){}

//Question 1 : 
bool operator<(IJ const& autre1, IJ const& autre2){
    if(autre2.i < autre1.i)    //On compare d'abord les lignes
        return true;
    else{
        if(autre1.i==autre2.i){
            if(autre1.j < autre2.j)  //Ensuite les colonnes
                return true;
        }
    }
    return false;
} //On la code de cette manière pour ranger les objets colonnes par colonnes dans la map
