//
//  matSquare.hpp
//  CM-GL-Mat
//
//  Created by Abdoullatif Omarjee on 11/03/2024.
//

#ifndef matSquare_hpp
#define matSquare_hpp

#include "mat.hpp"
#include <stdio.h>

class matSquare : public mat {
public:
    matSquare(int =1);
    matSquare(const matSquare &other);
    matSquare& operator=(const matSquare &other);
    virtual ~matSquare();
};

#endif /* matSquare_hpp */
