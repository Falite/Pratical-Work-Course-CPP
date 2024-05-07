//
//  matDense.hpp
//  CM-GL-Mat
//
//  Created by Abdoullatif Omarjee on 11/03/2024.
//

#ifndef matDense_hpp
#define matDense_hpp

#include "mat.hpp"
#include <stdio.h>

class matDense : public mat{
    double *ptcoef;  //aij stocke en  i+j*n
public:
    matDense(int n=1, int m=1);
    virtual ~matDense();
    matDense(const matDense &other);
    matDense& operator=(const matDense &other);
    void load(std::string );
    void save(std::string );
};

#endif /* matDense_hpp */
