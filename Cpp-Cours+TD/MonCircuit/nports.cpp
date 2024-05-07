//
//  nports.cpp
//  MonCircuit
//
//  Created by Abdoullatif Omarjee on 17/04/2024.
//

#include "nports.hpp"

nports::nports():nb(0){}
nports::~nports(){}
nports::nports(const nports &other){
    nb=other.nb;
}
nports& nports::operator=(const &other){
    if(nb!=other.nb){
        nb=other.nb;
    }
}

