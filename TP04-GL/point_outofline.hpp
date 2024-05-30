// Remplace avantageusement les "include guard" classiques à base de #ifnded #define #endif
#pragma once

#include <cstddef>
#include <cmath>
#include <ostream>

// Point dans R³
template<typename T,std::size_t N>  //Partie 1 : on commence par rendre la classe générique
class Point
{
private:
    T data[N];

public:
    // Constructeur par défaut
    Point();

    // Dimension du vecteur
    std::size_t size();

    // Opérateur [] permettant de lire et écrire les coordonnées du Point,
    // son type de retour change et devient lui aussi générique
    T& operator[] (std::size_t i);

    // Norme l2 du vecteur
    T norme();
};

// Affichage d'un Point
template<typename T,std::size_t N>
std::ostream& operator<< (std::ostream& out, Point<T,N>& pt);


template<typename T>  
class Point<T,1>
{
private:
    T data;

public:
    // Constructeur par défaut
    Point();

    // Dimension du vecteur
    std::size_t size();

    // Opérateur [] permettant de lire et écrire les coordonnées du Point,
    // son type de retour change et devient lui aussi générique
    T& operator[] (std::size_t i);

    // Norme l2 du vecteur
    T norme();
};
