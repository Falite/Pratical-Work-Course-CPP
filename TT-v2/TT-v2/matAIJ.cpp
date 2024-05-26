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
//Question 3: on instancie le compteur statique à 0
int compteur(0);

//Question 2 : on met l'entête template T partout

template<typename T>
matAIJ<T>::matAIJ(int n,int m):mat(n,m),m_map()/*On construit une map vide de la sorte*/{
    ++compteur;   //Q3 : on incrémente le compteur à chaque construction
}   //On construit une map vide de la sorte


template<typename T>
matAIJ<T>::matAIJ(matAIJ const& autre):mat(autre.n,autre.m){
    this->m_map = autre.m_map;
    ++compteur; //Q3 : on incrémente le compteur à chaque construction
}

template<typename T>  //Q2 : l'opérateur "=" s'écrit toujours pareil
matAIJ<T>& matAIJ<T>::operator=(matAIJ const& autre){
    if(this != &autre){
        this->n=autre.n;
        this->m=autre.m;
        this->m_map=autre.m_map;
    }
    return *this;
}

template<typename T>
matAIJ<T>::~matAIJ(){
    --compteur; //Q3 : on décrémente le compteur à chaque destruction
}
//Fin Question 2

//Question 5 :
template<typename T>
void matAIJ<T>::add(int i,int j, T aij){
    auto it = map<IJ,T>::iterator;   //On prend un itérateur pour parcourir la map, "auto" permet de dire au compilateur de typer l'itérateur à partir de son utilisation
    it = this->m_map.find(IJ(i,j));  //On le fixe sur la valeur Aij de la map
    if(aij != T()){                  //On fait l'opération que si aij est non nul
        if(it == this->m_map.end()){
            this->m_map.insert(IJ(i,j),aij); //Si it ne pointe vers aucune valeur de la matrice , alors on l'ajoute dans la matrice à l'aide de la méthode "insert"
        }
        else
            if((*it)+aij != 0)        //Si l'addition renvoie une valeur non nulle, on la fait normalement :
                this->m_map[IJ(i,j)]+=aij;
            else    //Sinon : On supprime cette valeur de la mlap, elle ne nous sert à rien parce qu'elle vaut 0 maintenant
                this->m_map.erase(IJ(i,j));
    }
}

//Question 6 : 
template<typename T>
vector<T> matAIJ<T>::matve(vector<T> autre){
    vector<T> res(this->m,T());
    auto itres = vector<T>::iterator;
    int j(1);
    for(auto itres=res.begin();itres != res.end(); itres++){
        T resr(0);
        for(int i=1;i<n;i++){
            if(this->map[IJ(i,j)])
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

