//
//  matCSR.hpp
//  CM-GL-Mat
//
//  Created by Abdoullatif Omarjee on 11/03/2024.
//

#ifndef matCSR_hpp
#define matCSR_hpp

#include <stdio.h>
#include "mat.hpp"

class matCSR : public mat{
protected:
    int nbMaxElem;
    double *ptA;
    int *ptC;
    int *ptL;
public:
    static int compteur;
    
public :
    matCSR(int n=1,int m=1, int NbMaxElem=1);
    virtual ~matCSR();
    matCSR(const matCSR &other);
    matCSR &operator=(const matCSR &other);
    
};
#endif /* matCSR_hpp */
