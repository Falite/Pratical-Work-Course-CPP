//
//  Vertebre.cpp
//  TP03 GL
//
//  Created by Abdoullatif Omarjee on 27/03/2024.
//

#include "Vertebre.hpp"
#include <iostream>
#include <string>
using namespace std;

Vertebre::Vertebre(int pattes,string pelage):m_pattes(pattes),m_pelage(pelage) {}

Vertebre::~Vertebre(){}

void Vertebre::affiche()const{
    cout << "Vertebre avec " << m_pattes << " pattes et un pelage " << m_pelage << endl;
}

void Vertebre::get_pattes()const{
    cout << m_pattes << endl;
}

void Vertebre::get_pelage()const{
    cout << m_pelage << endl;
}



Volante::Volante(int nailes):m_nailes(nailes) {}

Volante::~Volante(){}

void Volante::affiche()const{
    cout << "PNJ Volante avec " << m_nailes << " ailes." << endl;
}

void Volante::get_ailes()const{
    cout << m_nailes << endl;
}

Oiseau::Oiseau(int noeufs):Vertebre(2,"de plumes. "),Volante(2),m_noeufs(noeufs) {}

Oiseau::~Oiseau(){}

void Oiseau::get_oeufs()const{
    cout << m_noeufs << endl;
}

void Oiseau::affiche()const{
    Vertebre::affiche();
    Volante::affiche();
    cout << " et j'ai " << m_noeufs << " oeufs. " << endl;
}

ostream& operator<<(ostream &flux, Vertebre const& autre){
    flux << "Vertebre avec " << autre.m_pattes << " pattes et un pelage " << autre.m_pelage << endl;
    return flux;
}
