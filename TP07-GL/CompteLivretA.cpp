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
    cout << "type : Livret A" << endl;
    cout << "solde : " << this->solde() << endl;
}
