//
//  main.cpp
//  TT-v2
//
//  Created by Abdoullatif Omarjee on 26/05/2024.
//
#include <iostream>
#include "IJ.hpp"
#include "mat.hpp"
#include "matAIJ.hpp"
#include <vector>
#include <complex>    //Question 4 : pour pouvoir utiliser le type std::complex
using namespace std;  //pour ne pas avoir à mettre "std::" partout

int main() {
    
    //Question 7 : on instancie un objet de la classe matAIJ de type complex de la sorte :
    matAIJ<complex<double>> Mat(3,4);
    //Question 7 : on a choisi de la remplir de la sorte :
    complex<double> m(4.,6.);
    for(int i=1;i<3;i++){
        for(int j=1;j<4;j++){
            Mat.add(i,j, pow(m,i*j));   //Question 7 : Aij = (4+6*i)^{i*j} pour tout i,j ; on se sert de la méthode add
        }
    }
    cout << Mat << endl;  //Question 8 : On peut utiliser l'opérateur de flux "<<" de la sorte
    
    //Question 7 : On instancie un vecteur avec lequel on va pouvoir faire un matve avec Mat
    vector<complex<double>> vect;
    vect[1]=complex<double>(3.0,4.0);   //On remplit notre vecteur de la sorte
    vect[2]=complex<double>(2.0,5.5);
    vect[3]=complex<double>(7.9,3.0);
    for(int i=1;i<3;i++){
        cout << vect[i] << endl;
    }
    
    //Question 7 : on teste la méthode matve et on affiche le résultat
    vector<complex<double>> vectres = Mat.matve(vect);
    for(int i=1;i<3;i++){
        cout << vectres[i] << endl;
    }
    
    return 0;
}
