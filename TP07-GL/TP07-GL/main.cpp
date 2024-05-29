#include <iostream>
#include <map>
#include <string>

#include "compte.hpp"
#include "CompteLivretA.hpp"
#include "CompteCourant.hpp"
#include "Gestionnaire.hpp"
using namespace std;

int main()
{
    // Inventaire des comptes
    map<int,Compte*> comptes;

    // Équivalent à un "while (true)" mais permet de prendre en compte
    // quand l'entrée clavier est "fermée"
    while (! cin.bad())
    {
        // Permet d'ignorer les erreurs de conversion précédentes
        // (par exemple si on rentre un texte au lieu d'un nombre)
        cin.clear();

        // Demande d'une action
        string action;
        cout << endl << "Action (ouverture, fermeture, depot, retrait, transfert, consultation, update, quitter) ? " << endl;
        cin >> action;

        // Traitement de l'action
        try{
            if (action == "ouverture")
            {
                string type;
                cout << "Type de compte (courant ou livreta) ? " << endl;
                cin >> type;
                ouverture_compte(comptes, type);
            }
            else if (action == "fermeture"){
                int identifiant;
                cout << "Entrez votre identifiant" << endl;
                cin >> identifiant;
                fermeture_compte(comptes, identifiant);
                
            }
            else if (action == "depot" ){
                int identifiant; double montant;
                cout << "Entrez votre identifiant" << endl;
                cin >> identifiant;
                cout << "Entrez le montant à déposer" << endl;
                cin >> montant;
                depot(comptes, identifiant, montant);
                
                
            }
            else if (action == "retrait" ){
                int identifiant; double montant;
                cout << "Entrez votre identifiant" << endl;
                cin >> identifiant;
                cout << "Entrez le montant à retirer" << endl;
                cin >> montant;
                retrait(comptes, identifiant, montant);
                
                
            }
            else if (action == "transfert"){
                int id_from; int id_to; double montant;
                cout << "Entrez l'identifiant de l'envoyeur" << endl;
                cin >> id_from;
                cout << "Entrez l'identifiant du receveur" << endl;
                cin >> id_to;
                cout << "Entrez le montant à transférer" << endl;
                cin >> montant;
                transfert(comptes, id_from, id_to, montant);
                
                
            }
            else if (action == "consultation"){
                affiche_comptes(comptes);
            }
            else if (action == "update"){
                update_comptes(comptes);
            }
            else if (action == "quitter"){
                break;
            }
            else{
                cout << "Action non implémentée : " << action << endl;
                continue;
            }
        }
        catch(const CompteException& e){
            cerr << "Une erreur s'est produite sur le compte " << e.ident << " : " << e.what() << endl;
        }
    }

    // Libération de la mémoire allouée pour chaque compte
    delete_comptes(comptes);

    return 0;
}
