//
//  main.cpp
//  TT-v2
//
//  Created by Abdoullatif Omarjee on 26/05/2024.
//

#include <iostream>
#include "IJ.hpp"
#include "mat.hpp"
#include <vector>
#include <complex>
using namespace std;

int main() {
    
    matAIJ<complex<double>> Mat(3,4);
    complex<double> m(4.,6.);
    for(int i=1;i<3;i++){
        for(int j=1;j<4;j++){
            Mat.add(i,j, pow(m,i*j));
        }
    }
    cout << Mat << endl;
    
    vector<complex<double>> vect;
    vect[1]=complex<double>(3.0,4.0);
    vect[2]=complex<double>(2.0,5.5);
    vect[3]=complex<double>(7.9,3.0);
    for(int i=1;i<3;i++){
        cout << vect[i] << endl;
    }
    
    vector<complex<double>> vectres = Mat.matve(vect);
    for(int i=1;i<3;i++){
        cout << vectres[i] << endl;
    }
    
    return 0;
}
