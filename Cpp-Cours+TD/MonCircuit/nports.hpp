//
//  nports.hpp
//  MonCircuit
//
//  Created by Abdoullatif Omarjee on 17/04/2024.
//

#ifndef nports_hpp
#define nports_hpp

#include <stdio.h>

class nports{
protected:
    int nb;
public:
    nports();
    virtual ~nports();
    nports(const nports &other);
    nports& operator=(const &other);
    virtual void affiche()=0;
};

#endif /* nports_hpp */
