//
//  R.hpp
//  MonCircuit
//
//  Created by Abdoullatif Omarjee on 17/04/2024.
//

#ifndef R_hpp
#define R_hpp

#include <stdio.h>
#include "nports.hpp"
#include <string>
#include <iostream>


class R : public nports {
protected:
    std::string name;
    double r;
public:
    R();
    virtual ~R();
    R(double rho,std::string nom);
    R& operator=(const R &other);
    void affiche(){std::cout << name << std::endl;}
    
};

#endif /* R_hpp */
