//
//  R.cpp
//  MonCircuit
//
//  Created by Abdoullatif Omarjee on 17/04/2024.
//

#include "R.hpp"
#include <string>
using namespace std;

R::R():r(0.),name("wesh") {}
R::~R()
R::R(double rho,string nom):r(rho),name(nom) {}
R& R::operator=(const R &other){
    this->r=other.r;
    this->name=other.name;
}
