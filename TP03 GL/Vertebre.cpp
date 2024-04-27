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

/*              VERTEBRE                */
Vertebre::Vertebre(int pattes,string pelage):m_pattes(pattes),m_pelage(pelage) {}

Vertebre::~Vertebre(){}

void Vertebre::affiche()const{
    cout << "Vertebre avec " << m_pattes << " pattes et un pelage " << m_pelage << endl;
}

int Vertebre::get_pattes()const{
    return m_pattes;
}

string Vertebre::get_pelage()const{
    return m_pelage;
}


/*                  VOLANTE             */
Volante::Volante(int nailes):m_nailes(nailes) {}

Volante::~Volante(){}

void Volante::affiche()const{
    cout << "PNJ Volante avec " << m_nailes << " ailes." << endl;
}

int Volante::get_ailes()const{
    return m_nailes;
}


/*              OISEAU              */
Oiseau::Oiseau(int noeufs):Vertebre(2,"de plumes. "),Volante(2),m_noeufs(noeufs) {}

Oiseau::~Oiseau(){}

int Oiseau::get_oeufs()const{
    return m_noeufs;
}

void Oiseau::affiche()const{
    Vertebre::affiche();
    Volante::affiche();
    cout << " et j'ai " << m_noeufs << " oeufs. " << endl;
}



/*          SURCHARGES          */
ostream& operator<<(ostream &flux, Vertebre const& autre){
    flux << "Vertebre avec " << autre.get_pattes() << " pattes et un pelage " << autre.get_pelage() << endl;
    return flux;
}

ostream& operator<<(ostream &flux, Volante const& autre){
    flux << "Volante avec " << autre.get_ailes() << " ailes. " << endl;
    return flux;
}

ostream& operator<<(ostream &flux, Oiseau const &zoizo){
    flux << "Volante avec " << zoizo.get_ailes() << " ailes," << zoizo.get_pattes() << " pattes et " << zoizo.get_pelage() << " et enfin " << zoizo.get_oeufs() << " oeufs. " << endl;
    return flux;
}
