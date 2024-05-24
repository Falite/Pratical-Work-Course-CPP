//
//  Gestionnaire.hpp
//  TP07-GL
//
//  Created by Abdoullatif Omarjee on 22/05/2024.
//

#ifndef Gestionnaire_hpp
#define Gestionnaire_hpp

#include <stdio.h>
#include <iostream>
#include <map>
#include <string>

#include "compte.hpp"
#include "CompteLivretA.hpp"
#include "CompteCourant.hpp"
using namespace std;

// Affiche la liste des comptes
void affiche_comptes(map<int,Compte*>& comptes);


// Met à jour le solde de tous les comptes
void update_comptes(map<int,Compte*>& comptes);


// Libère la mémoire allouée pour les comptes
void delete_comptes(map<int,Compte*> & comptes);

// Ouverture d'un nouveau compte de type spécifié
void ouverture_compte(map<int,Compte*>& comptes, string type );

// Trouver un compte à l'aide de son identifiant
map<int,Compte*>::iterator trouve_compte(map<int,Compte*>& comptes, int ident);

// fermet un compte à l'aide de son identifiant
void fermeture_compte(map<int,Compte*>& comptes,int ident);

// déposer de l'argent sur le compte indiqué à l'aide de son identifiant
void depot(map<int,Compte*>& comptes, int ident, double montant);

// retirer de l'argent depuis le compte indiqué à l'aide de son identifiant
void retrait(map<int,Compte*>& comptes,int ident, double montant);

// bonus : transférer depuis un compte vers un autre
void transfert(map<int,Compte*>& comptes,int from_id,int to_id,double montant);
#endif /* Gestionnaire_hpp */
