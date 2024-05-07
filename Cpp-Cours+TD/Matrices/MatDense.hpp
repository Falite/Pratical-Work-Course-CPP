//
//  MatDense.hpp
//  Matrices
//
//  Created by Abdoullatif Omarjee on 04/03/2024.
//

#ifndef MatDense_hpp
#define MatDense_hpp

#include <stdio.h>

class matDense : public mat{
    double *ptcoef;
    
public:
    matDense(int n=1,int m=1);
    virtual ~matDense();
    matDense(const matDense &other);
    matDense& operator =(const matDense &other);
    
};
#endif /* MatDense_hpp */
