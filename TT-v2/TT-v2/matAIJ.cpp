//
//  matAIJ.cpp
//  TT-v2
//
//  Created by Abdoullatif Omarjee on 26/05/2024.
//

#include "matAIJ.hpp"
#include "IJ.hpp"
#include <algorithm>
#include <iostream>
#include <map>

using namespace std;

template<typename T>
matAIJ<T>::matAIJ(int n,int m):mat(n,m),m_map(){}


template<typename T>
matAIJ<T>::matAIJ(matAIJ const& autre):mat(autre.n,autre.m){}

template<typename T>
matAIJ<T>& matAIJ<T>::operator=(matAIJ const& autre){
    if(this != &autre){
        this->n=autre.n;
        this->m=autre.m;
        this->m_map=autre.m_map;
    }
}

template<typename T>
matAIJ<T>::~matAIJ(){
    
}

template<typename T>
void matAIJ<T>::add(int i,int j, T aij){
    map<IJ,T>::iterator it;
    auto it = this->m_map.find(IJ(i,j));
    if(aij != T()){
        if(it == this->m_map.end()){
            this->m_map[IJ(i,j)]=aij;
        }
        else
            if((*it)+aij != 0)
                this->m_map[IJ(i,j)]+=aij;
    }
}

template<typename T>
vector<T> matAIJ<T>::matve(vector<T> autre){
    vector<T> res(this->m,T());
    vector<T>::iterator itres;
    int j(1);
    for(auto itres=res.begin();itres != res.end(); itres++){
        T resr(0);
        for(int i=1;i<n;i++){
            resr+=this->m_map[IJ(i,j)]*autre[i];
        }
        (*itres)+=resr;
        ++j;
    }
    return res;
    
}

template<typename T>
int matAIJ<T>::getn(){ return n;}

template<typename T>
int matAIJ<T>::getm(){ return m;}

template<typename T>
T matAIJ<T>::getvalue(int i,int j){
    return m_map[IJ(i,j)];
}

template<typename T>
ostream& operator<<(ostream& flux, matAIJ<T> const& autre){
    for(int i=1;i<autre.getn();i++){
        for(int j=1;j<autre.getm();j++){
            flux << autre.getvalue(i,j) << " " ;
        }
        flux << endl;
    }
}

