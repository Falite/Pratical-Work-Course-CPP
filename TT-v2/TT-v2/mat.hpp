//
//  mat.hpp
//  TT-v2
//
//  Created by Abdoullatif Omarjee on 26/05/2024.
//

#ifndef mat_hpp
#define mat_hpp

#include <stdio.h>
#include "IJ.hpp"
#include <map>

class mat {
protected:
    int n;
    int m;
public:
    mat(int n=1,int m=1);
    /*mat(mat const& autre); */
    mat& operator=(mat const& autre);
    virtual ~mat();
};




#endif /* mat_hpp */
