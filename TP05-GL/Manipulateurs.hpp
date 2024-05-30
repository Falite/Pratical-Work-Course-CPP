//
//  Manipulateurs.hpp
//  TP05-GL
//
//  Created by Abdoullatif Omarjee on 30/05/2024.
//

#ifndef Manipulateurs_hpp
#define Manipulateurs_hpp

#include <stdio.h>
#include <vector>
#include <list>

template<typename T>
void affiche_vecteur(std::vector<T> vec);

void affiche(std::vector<int>const vecc);

void affiche(std::list<double>const listt);

template<typename T>
void affiche_liste(std::list<T> liste);

void efface(std::vector<int>& vecc, int i);

template<typename T>
void efface_vector(std::vector<T>& vec, T elem);

void efface(std::list<double>& listt, double a);

template <typename T>
void efface_liste(std::list<T>& liste , T elem);

bool est_pair(int b);

void effacepairs(std::vector<int>& vecc);

template <typename conteneur>
void affiche_gen(conteneur& cont);

template<typename conteneur ,typename T>
void efface_gen(conteneur& cont, T elem);
#endif /* Manipulateurs_hpp */
