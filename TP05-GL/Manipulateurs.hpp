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

//question d : voici la déclaration
void affiche(std::vector<int>const vecc);

//question e : surcharge de la fonction affiche pour une liste
void affiche(std::list<double>const listt);

//question f : 
void efface(std::vector<int>& vecc, int i);

//question g : surcharge de efface pour une liste de réels
void efface(std::list<double>& listt, double a);

//PARTIE 2 : GENERICITE SUR LES FONCTIONS
//Leurs comportements restent les mêmes
template<typename T>
void affiche_vecteur(std::vector<T> vec);    //Un conteneur générique prend <T> à côté de son nom

template<typename T>
void affiche_liste(std::list<T> liste);

template<typename T>
void efface_vector(std::vector<T>& vec, T elem);

template <typename T>
void efface_liste(std::list<T>& liste , T elem);

template <typename conteneur>
void affiche_gen(conteneur& cont);

template<typename conteneur ,typename T>
void efface_gen(conteneur& cont, T elem);


bool est_pair(int b);

void effacepairs(std::vector<int>& vecc);
#endif /* Manipulateurs_hpp */
