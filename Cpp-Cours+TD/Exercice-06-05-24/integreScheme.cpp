#include "integreScheme.hpp"
#include <iostream>
using namespace std;

template<class T>
integreScheme<T>::integreScheme(){
    this->
};

template<class T>
integreScheme<T>::~integreScheme(){}

template<class T>
integreScheme<T>::integreScheme(integreScheme const& autre){}

template<class T>
integreScheme& integreScheme<T>::operator=(integreScheme const& autre){}

template<class T>
void integreScheme<T>::setInitialCondition(T x0){
    this->x0=x0;
}

template<class T>
void integreScheme<T>::setTolerances(double atol,double rtol){
    this->rtol=rtol;
    this->atol=atol;
}

template<class T>
void integreScheme<T>::setStepSize(double h){
    this->h=h;
}


template<class T>
double integreScheme<T>::localeErreur(int k){

}

template<class T>
T integreScheme<T>::newton(T x0){
    
}

template class integreScheme<double>;
