#include "SchemeAdamsExplicit.hpp"
#include <iostream>
#include<vector>
using namespace std;

template<class T>
ShemeAdamsExplicit<T>::SchemeAdamsExplicit(){
    this->a[1].resize(1);
    a[1][0]=1. ;
    this->a[2].resize(2);
    a[2][0]=1.5;      a[2][1]=-0.5;
    this->a[3].resize(3);
    a[3][0]=23./12. ; a[3][1]=-16. /12. ; a[2][2]=5./12. ;
    this->a[4].resize(4);
    a[4][0]=55./24. ; a[4][1]=-59./24. ;  a[4][2]=37./24.;  a[4][3]=-9;/24. ;

    this->f.resize(4);

}

template<class T>
SchemeAdamsExplicit<T>::SchemeAdamsExplicit(SchemeAdamsExplicit const& autre){
    if(this!=&autre){
    this->a=autre.a;
    this->atol=autre.atol;
    this->rtol=autre.rtol;
    this->h=autre.h;
    this->t0=autre.t0;
    this->tf=autre.tf;
    this->x0=autre.x0;
    }
    return *this;

}

template<class T>
vector<T> SchemeAdamsExplicit<T>::integreTimeIntervalle(double t0,double tf,int k){
    T ynp1;
    double tn,tn+1;
    tn=t0;

    switch(k){
        case 1 :
            ynp1=yn+this->h*this->a[1][0]*this->f[0];
            break //si T=vector<double>,il faut définir le produit avec un double et l'operator+ , ce n'est pas le cas si T=valarray
        case 2 :
            ynp1=yn+this->h*(this->a[2][0]*this->f[0]+this->a[2][1]*this->f[1]);
            break;
        case 3 :
            ynp1=yn+this->h*(this->a[3][0]*this->f[0]+this->a[3][1]*this->f[1]+this->a[3][2]*this->f[2]);
            break;
        case 4 :
            ynp1=yn+this->h*(this->a[4][0]*this->f[0]+this->a[4][1]*this->f[1]+this->a[4][2]*this->f[2]+this->a[4][3]*this->f[3]);
            break;
    }
    //il faut évaluer f(tn+1,yn+1) et mettre à jour le f
    for(int i=3;i>0;i--){
        this->f[i]=this->f[i-1];
    }
    this->f[0]=this->ptf(tnp1,ynp1);  // ptf : pointeur de fonction f
}

template<class T>
void SchemeAdamsExplicit<T>::affiche(){
    cout << "Adams Explicit" << endl;
}

template class integreScheme<double>;