//
//  IJ.hpp
//  TT-v2
//
//  Created by Abdoullatif Omarjee on 26/05/2024.
//

#ifndef IJ_hpp
#define IJ_hpp

#include <stdio.h>

class IJ {
protected:
    int i;
    int j;
public:
    IJ(int i=0,int j=0);
    IJ(IJ const& autre);
    IJ& operator=(IJ const& autre);
    virtual ~IJ();
    
    friend bool operator<(IJ const& autre1, IJ const& autre2);
};
#endif /* IJ_hpp */
