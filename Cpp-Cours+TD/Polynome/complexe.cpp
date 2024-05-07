//
//  complexe.cpp
//  Complexe2
//
//  Created by Abdoullatif Omarjee on 25/03/2024.
//

#include "complexe.hpp"

template<class T> complexe<T>::complexe(T x, T y){
    this->x=x;
    this->y=y;
}
virtual template<class T> complexe<T::~complexe(){}

template<class T> complexe<Tcomplexe(const complexe &other){
    this->x=other.x;
    this->y=other.y;
}
complexe& template<class T> complexe<T::operator=(const complexe &other){
    if (this!=&other){
        this->x=other.x;
        this->y=other.y;
    }
    return *this;
}

template class complexe<double>;
template class complexe<float>;
template class complexe<*mat>;