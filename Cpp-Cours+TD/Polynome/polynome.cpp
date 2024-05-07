#include "polynome.hpp"

template<class T> poly<T>::poly(std::map<int,T> m){
    this->coef=m;
}

template<class T> poly<T>::~poly(){}

template<class T> poly<T>::poly(const poly &other){
    this->coef=other.m;
}

template<class T> poly<T>::& poly<T>::operator=(const poly &other){
    if (this!=&other){
        this->coef=other.coef
    }
}

template<class T> std::ostream& operato<<(std::ostream& sort, poly<T> &P){
    typename std::map<int,T>::iterator it;
    fot(it=P.coef.begin();it!=P.coef.end();it++){
        sortie<<it->second<<"X"<<it->first<<"+";
    }
    return sort
}

template<class T>  ::insert(int , T){
    if(a!=T()) this->coef[i]=a;
}

template class poly<double>;
