//
//  matSquareCSR.cpp
//  CM-GL-Mat
//
//  Created by Abdoullatif Omarjee on 11/03/2024.
//

#include "matSquareCSR.hpp"

matSquareCSR(int n, int nbMaxElem):matSquare(n),matCSR(n,n,nbMaxElem){
    
}

matSquareCSR(const matSquareCSR &other): matSquare(other.matSquare::n),
matCSR(other.matCSR::n,other.matCSR::n,other.nbMaxElem){
    
}

matSquareCSR::operator=(const matSquareCSR &other){
    if(this!= &other){
        (*this).matSquare::operator=((const matSquare)other);
        (*this).matCSR::operator=((const matCSR)other);
    }
    return *this;
}

