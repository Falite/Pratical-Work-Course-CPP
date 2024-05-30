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
    else{ throw CompteException(0,"donne un vrai type de compte té");}
}

map<int,Compte*>::iterator trouve_compte(map<int,Compte*>& comptes, int ident){
    map<int,Compte*>::iterator it = comptes.find(ident);
    if(it != comptes.end()){
        return it;
    }
    else{
        throw CompteException(ident,"le compte n'existe pas JODER");
    }
}

void fermeture_compte(map<int,Compte*>& comptes,int ident){
    auto it = trouve_compte(comptes, ident);
    if(it != comptes.end()){
        if((*it).second->solde()>0){
            delete (*it).second;
        }
        else{ throw CompteException(ident,"il reste encore de l'argennnnnnnt");}
    }
    else{ throw CompteException(ident,"Pourquoi t'essaie de fermer un compte qui n'existe pas t bizarre");}
}

void depot(map<int,Compte*>& comptes, int ident, double montant){
    auto it = trouve_compte(comptes, ident);
    if ( it != comptes.end()){
        (*it).second->depot(montant);
    }
    else{ throw CompteException(ident,"le compte n'existe pas JODER l'argent est perdu");}
}

void retrait(map<int,Compte*>& comptes,int ident, double montant){
    auto it = trouve_compte(comptes, ident);
    if ( it != comptes.end()){
        (*it).second->retrait(montant);
    }
    else{ throw CompteException(ident,"le compte n'existe pas JODER pas d'argent pour toi");}
}

void transfert(map<int,Compte*>& comptes,int from_id,int to_id,double montant){
    if( from_id  != to_id ){
        auto it_from = trouve_compte(comptes, from_id);
        auto it_to = trouve_compte(comptes, to_id);
        if( it_from != comptes.end() && it_to != comptes.end()){
            (*it_from).second->retrait(montant);
            (*it_to).second->depot(montant);
        }
        else{ throw CompteException(from_id,"un des deux comptes n'existe pas casse toi de là");}
    }
    else{ throw CompteException(to_id,"ptdr t'essaie de transférer sur deux mêmes comptes t'es bête ou quoi");}
}



