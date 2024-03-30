//
//  main.cpp
//  TP02 GL
//
//  Created by Abdoullatif Omarjee on 13/03/2024.
//

#include <iostream>
#include <string>
#include "vecteur.hpp"
#include "matrice.hpp"
#include "puissance.hpp"
using namespace std;

int main(int argc, const char * argv[]) {
    cout << "bonjour à tous les amis " << endl;
    matrice M(1. , 2. , 3. ,
              4. , 5. , 6. ,
              7. , 8. , -9. );
    M.affiche();
    vecteur v(2. , 6. , 6. );
    v.affiche();
    cout << "on va faire la méthode de puissance here we goooooo" << endl;
    int n=10;
    cout << "voici la valeur propre maximale " << puissance(M,v,n) << endl;
    
    vecteur C;
    C=M.produit(v);
    C.affiche();
    
    return 0;
}
