//
//  Vecteur.cpp
//  TP2 part 4 - GL
//
//  Created by Abdoullatif Omarjee on 20/03/2024.
//

#include "Vecteur.hpp"
#include <iostream>
#include <string>
using namespace std;

Vecteur::Vecteur(){
    m_data = new double[m_taille];
}

Vecteur::Vecteur(int taille){
    m_taille=taille;
    m_data = new double[m_taille];
    for(int i=0;i<m_taille;i++){
        m_data[i]=0;
    }
}

Vecteur::~Vecteur(){
    delete[] m_data;
}

void Vecteur::Remplir(int i,double x){
    if(i<=m_taille){
        m_data[i]=x;
    }
    else{cout << "erreur : indice en dehors du vecteur" << endl;}
}

void Vecteur::affiche(){
    for(int i=0;i<m_taille;i++){
        cout << m_data[i] << " "  ;
    }
    cout << endl;
}
void Vecteur::echelle(double fact){
    for(int i=0;i<m_taille;i++){
        m_data[i]*=fact;
    }
}

double produit(Vecteur const& V,Vecteur const& U){
    double res(0);
    if(U.m_taille==V.m_taille){
        for(int i=0;i<3;i++){
            res+=U.m_data[i]*V.m_data[i];
        }
        return res; }
    else{
        cout << " erreur : les vecteur ne sont pas de même taille ";
        return 0;
    }
}
