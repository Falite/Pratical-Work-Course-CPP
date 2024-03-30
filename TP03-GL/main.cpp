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
    Volante Nathan(4);
    Nathan.affiche();
    return 0;
}
