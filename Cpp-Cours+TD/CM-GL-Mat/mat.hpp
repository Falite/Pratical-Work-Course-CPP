//
//  mat.hpp
//  CM-GL-Mat
//
//  Created by Abdoullatif Omarjee on 11/03/2024.
//

#ifndef mat_hpp
#define mat_hpp

#include <stdio.h>

class mat {
protected:
    int n; //rows
    int m; //columns
public:
    mat(int =1, int =1);
    virtual ~mat();
    mat(const mat &other);
    mat& operator=(const mat &other);
};

#endif /* mat_hpp */
