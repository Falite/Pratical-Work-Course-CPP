#include <iostream>
#include <vector>

#include "vertebre.hpp"
#include "oiseau.hpp"
#include "felin.hpp"
using namespace std;

void affiche_enclos(Vertebre &v){          //Facile 
    cout << "Soyez les bienvenus, cet enclos contient un" << endl;
    v.affiche();
}

int main()
{
    //PARTIE 2 :
    vector<Vertebre*> zoo;
    
    int pattes;                           //Bonus : on utilise cin pour demander à l'utilisateur 
    cout << "choisissez le nombre d'oeufs du piaf" << endl;
    cin >> pattes;
    
    zoo.push_back(new Oiseau(pattes));   //déclarer un pointeur dans le vecteur se fait toujours avec cette syntaxe
    
    string couleur;
    cout << "choisissez la couleur du chatonnnnn" << endl;
    cin >> couleur;
    
    zoo.push_back(new Felin(couleur));
    
    int pattes2;
    cout << "choisissez le nombre d'oeufs de l'autre piaf" << endl;
    cin >> pattes2;
    zoo.push_back(new Oiseau(0));

    //question b : 
    fot(int i=0;int<zoo.size();++i){
        zoo[i]->affiche();            //important : c'est un vecteur de pointeurs, la syntaxe zoo[i].affiche() ne marche pas 
    }
    
    //question  f : affichage avec les itérateurs
    vector<Vertebre*>::iterator it;
    for(auto it=zoo.begin();it!=zoo.end();++it){
        (*it)->affiche();               //important : le conteneur contient des pointeurs, on passe donc l'itérateur
    }                                   //en référence `(*it)` au lieu de `it` ,
                                        //et on le fait pointer vers la méthode qui nous intéresse

    //libération de la mémoire 
    for(auto it=zoo.begin();it!=zoo.end();++it){
        delete *it;
    }
    
    
    return 0;
}
