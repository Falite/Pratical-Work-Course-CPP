//
//  CompteLivretA.cpp
//  TP07-GL
//
//  Created by Abdoullatif Omarjee on 22/05/2024.
//

#include "CompteLivretA.hpp"
#include <iostream>
using namespace std;

double CompteLivretA::taux = 3.;

CompteLivretA::CompteLivretA():Compte(){}

CompteLivretA::~CompteLivretA(){}

double CompteLivretA::interet(){
    return (this->credit*this->taux)/100. ;
}
void CompteLivretA::update(){
    double intrt = this->interet();
    this->credit+=intrt;
}

void CompteLivretA::affiche()const{
    cout << "numéro de compte : " << this->getIdent() << endl;
    cout << "type : Livret A à " << taux << "%" << endl;
    cout << "solde : " << this->solde() << endl;
}

void CompteLivretA::depot(double montant){
    if(montant>0 && montant <= 20000.){
        credit += montant;
    }
    else if(montant >0 && montant > 20000){
        throw CompteException(ident,"le plafond est dépassé");
    }
    else{
        throw CompteException(ident,"le montant est négatif");
    }
}
