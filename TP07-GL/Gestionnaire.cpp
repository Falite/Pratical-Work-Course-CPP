//
//  Gestionnaire.cpp
//  TP07-GL
//
//  Created by Abdoullatif Omarjee on 22/05/2024.
//

#include "Gestionnaire.hpp"

#include <stdio.h>
#include <iostream>
#include <map>
#include <string>

#include "compte.hpp"
#include "CompteLivretA.hpp"
#include "CompteCourant.hpp"
using namespace std;

// Affiche la liste des comptes
void affiche_comptes(map<int,Compte*>& comptes)
{
    cout << "Liste des comptes:" << endl;
    for (auto it = comptes.begin(); it != comptes.end(); ++it)
        (*it).second->affiche(); // Il faut déréférencer l'itérateur, puis le pointeur
    cout << endl;
}

// Met à jour le solde de tous les comptes
void update_comptes(map<int,Compte*>& comptes)
{
    for (auto it = comptes.begin(); it != comptes.end(); ++it)
        (*it).second->update();
}

// Libère la mémoire allouée pour les comptes
void delete_comptes(map<int,Compte*>& comptes){
    for (auto it = comptes.begin(); it != comptes.end(); ++it)
        delete (*it).second;
}

// Ouverture d'un nouveau compte de type spécifié
void ouverture_compte(map<int,Compte*>& comptes, string type ){
    if(type=="livreta" || type=="Livret A"){
        CompteLivretA* temp = new CompteLivretA;
        int ident = temp->getIdent();
        comptes[ident]=temp;
    }
    else if(type=="courant" || type=="Courant"){
        CompteCourant* temp = new CompteCourant;
        int ident = temp->getIdent();
        comptes[ident]=temp;
    }
    else{ cout << "erreur : le type de compte est incorrect JODER";}
}

map<int,Compte*>::iterator trouve_compte(map<int,Compte*>& comptes, int ident){
    map<int,Compte*>::iterator it = comptes.find(ident);
    if(it != comptes.end()){
        return it;
    }
    else{
        throw runtime_error("Compte non trouvé AAAAAH");
    }
}

void fermeture_compte(map<int,Compte*>& comptes,int ident){
    auto it = trouve_compte(comptes, ident);
    if(it != comptes.end()){
        delete (*it).second;
    }
    else{ throw runtime_error("erreur : il n'y a pas de compte de cet identifiant pardi !");}
}

void depot(map<int,Compte*>& comptes, int ident, double montant){
    auto it = trouve_compte(comptes, ident);
    if ( it != comptes.end()){
        (*it).second->depot(montant);
    }
    else{ throw runtime_error("le compte n'a pas été trouvé , j'ai pris tout l'argent !!!");}
}

void retrait(map<int,Compte*>& comptes,int ident, double montant){
    auto it = trouve_compte(comptes, ident);
    if ( it != comptes.end()){
        (*it).second->retrait(montant);
    }
    else{ throw runtime_error("le compte n'a pas été trouvé , j'ai pris tout l'argent !!!");}
}

void transfert(map<int,Compte*>& comptes,int from_id,int to_id,double montant){
    if( from_id  != to_id ){
        auto it_from = trouve_compte(comptes, from_id);
        auto it_to = trouve_compte(comptes, to_id);
        if( it_from != comptes.end() && it_to != comptes.end()){
            (*it_from).second->retrait(montant);
            (*it_to).second->depot(montant);
        }
        else{ throw runtime_error( "un des deux comptes n'existe pas , circulez y'a rien à voir " );}
    }
    else{ throw runtime_error( "les deux comptes sont les mêmes" );}
}



