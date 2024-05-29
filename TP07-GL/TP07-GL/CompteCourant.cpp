//
//  CompteCourant.cpp
//  TP07-GL
//
//  Created by Abdoullatif Omarjee on 22/05/2024.
//

#include "CompteCourant.hpp"
#include <iostream>
using namespace std;

CompteCourant::CompteCourant():Compte(),debit(0.){}

CompteCourant::~CompteCourant(){}

void CompteCourant::retrait(double montant){
    if(montant>0 && montant < this->solde()){
        debit += montant;
    }
    else if(montant > this->solde()){
        throw CompteException(ident,"pas de droit au découvert barre toi");
    }
    else
        throw CompteException(ident);
}
double CompteCourant::solde()const{
    return credit-debit;
}
void CompteCourant::update(){
    credit -= debit;
    debit=0;
}
void CompteCourant::affiche()const {
    cout << "numéro de compte : " << this->getIdent() << endl;
    cout << "type : Compte Courant" << endl;
    cout << "solde : " << this->solde() << endl;
}
