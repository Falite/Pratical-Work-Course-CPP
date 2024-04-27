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
    cout << Boris << endl;  //ça marche 
    Volante Ihab(8);
    
    cout << "Je suis Ihab et je suis "  << endl;
    cout << Ihab << endl;
    
    Oiseau Toufik(8);
    cout << " Je suis Toufik et je suis : " << endl;
    cout << Toufik << endl;
    return 0;
}
