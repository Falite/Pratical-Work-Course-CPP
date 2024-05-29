//
//  main.cpp
//  TP03 GL
//
//  Created by Abdoullatif Omarjee on 27/03/2024.
//

#include <iostream>
#include "Vertebre.hpp"
using namespace std;


int main() {
    
    Vertebre Boris(4,"tout doux");
    cout << "je suis Boris et je suis un " << endl;
    cout << Boris << endl;  

    Volante Clara(8);
    cout << "Je suis Clara et je suis "  << endl;
    cout << Ihab << endl;
    cout << "je vole de mes propres ailes !"
    
    Oiseau Kenza(8);
    cout << "Je suis Kenza et je suis : " << endl;
    cout << Toufik << endl;
    cout << "J'adore manger des graines ! " << endl;
    
    return 0;

    //PARTIE 2 : Observation : le destructeur de la classe Vertebre est déclaré en premier car il n'y a pas de polymorphisme.
}
