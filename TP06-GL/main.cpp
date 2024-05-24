#include <iostream>
#include <vector>

#include "vertebre.hpp"
#include "oiseau.hpp"
#include "felin.hpp"
using namespace std;

void affiche_enclos(Vertebre &v){
    cout << "Soyez les bienvenus, cet enclos contient un" << endl;
    v.affiche();
}

int main()
{
    
    vector<Vertebre*> zoo;
    
    int pattes;
    cout << "choisissez le nombre d'oeufs du piaf" << endl;
    cin >> pattes;
    
    zoo.push_back(new Oiseau(pattes));
    
    string couleur;
    cout << "choisissez la couleur du chatonnnnn" << endl;
    cin >> couleur;
    
    zoo.push_back(new Felin(couleur));
    
    int pattes2;
    cout << "choisissez le nombre d'oeufs de l'autre piaf" << endl;
    cin >> pattes2;
    zoo.push_back(new Oiseau(0));
    
    vector<Vertebre*>::iterator it;
    //affichage
    for(auto it=zoo.begin();it!=zoo.end();++it){
        (*it)->affiche();
    }
    for(auto it=zoo.begin();it!=zoo.end();++it){
        delete *it;
    }
    
    
    
    cout << endl;
    cout << endl;
    cout << "The end" << endl;
    cout << endl;
    
    return 0;
}
