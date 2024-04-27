//
//  Matrice.cpp
//  TP2 part 4 - GL
//
//  Created by Abdoullatif Omarjee on 20/03/2024.
//

#include "Vecteur.hpp"
#include "Matrice.hpp"
#include <iostream>
#include <string>
using namespace std;

Matrice::Matrice(){
    m_data=new double*[m_lignes];
    for(int i=0;i<m_lignes;i++){
        m_data[i]=new double[m_colonnes];
    }
}

Matrice::Matrice(int lignes,int colonnes){
    m_colonnes=colonnes;
    m_lignes=lignes;
    m_data=new double*[m_lignes];
    for(int i=0;i<m_lignes;i++){
        m_data[i]=new double[m_colonnes];
    }
}

void Matrice::Remplir(int ligne,int colonne,double x){
    m_data[ligne][colonne]=x;
}

void Matrice::affiche()const{
    for(int i=0;i<m_colonnes;i++){
        for(int j=0;j<m_lignes;j++){
            cout << m_data[j][i] << " " ;
        }
        cout << endl;
    }
    cout << endl;
}

Vecteur Matrice::produit(Vecteur const& V){
    Vecteur RES(m_lignes);
    if(V.m_taille==m_colonnes){
        for(int i=0;i<m_colonnes;i++){
            for(int j=0;j<m_lignes;j++){
                RES.m_data[i]+=m_data[i][j]*V.m_data[i];
            }
        }
        return RES;
    }
    else{
        cout << " erreur : la taille du vecteur ne matche pas avec le nombre de colonnes de la matrice " << endl;
        return RES;
    }
}
