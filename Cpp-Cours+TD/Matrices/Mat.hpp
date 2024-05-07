//
//  Mat.hpp
//  Matrices
//
//  Created by Abdoullatif Omarjee on 04/03/2024.
//

#ifndef Mat_hpp
#define Mat_hpp

#include <stdio.h>
class mat{
protected:
    int n;
    int m;
public:
    mat(int n=1,int m=1);
    virtual ~mat();
    mat(const mat &other);
    mat& operator=(const mat &other);
};
#endif /* Mat_hpp */
