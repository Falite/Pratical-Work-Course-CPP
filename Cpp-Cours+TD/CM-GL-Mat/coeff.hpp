//
//  coeff.hpp
//  CM-GL-Mat
//
//  Created by Abdoullatif Omarjee on 18/03/2024.
//

#ifndef coeff_hpp
#define coeff_hpp

#include <stdio.h>
class coeff {
protected:
    int* i;
    int* j;
    double* a;
public:
    coeff(int i,int j, double a);
    coeff( coeff const& other);
    
};
#endif /* coeff_hpp */
