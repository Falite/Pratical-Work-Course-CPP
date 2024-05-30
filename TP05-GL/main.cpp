//
//  main.cpp
//  TP05-GL
//
//  Created by Abdoullatif Omarjee on 17/04/2024.
//

#include "Manipulateurs.hpp"
using namespace std;

int main() {
    //question a : la syntaxe est toujours la même :
    vector<int> vecint;
    list<double> listreal;
    vector<double>vecdb;
    list<int>listint;
    
    vecint.push_back(10);     //question b : On remplit le vecteur d'entiers.
    vecint.push_back(8);
    vecint.push_back(15);
    vecint.push_back(28);
    
    vecdb.push_back(20.0);
    vecdb.push_back(17.78);
    vecdb.push_back(78.11);
    vecdb.push_back(166.89);
    
    listreal.push_back(2.5);    //question c : on remplit la liste de réels.
    listreal.push_back(1.8);
    listreal.push_back(2.2);
    listreal.push_back(0.15);
    
    
    listint.push_back(7);
    listint.push_back(9);
    listint.push_back(19);
    listint.push_back(78);
    
    
    efface(vecint,15);
    efface(vecint,18);
    affiche(vecint);
    
    efface(listreal,1.8);
    efface(listreal, 2.0);
    affiche(listreal);
    
    efface_liste(listint, 7);
    
    affiche_vecteur(vecint);
    affiche_vecteur(vecdb);
    affiche_liste(listreal);
    affiche_liste(listint);
    
    return 0;
}
