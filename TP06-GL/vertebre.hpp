#pragma once

#include <string>

//PARTIE 1 : 

class Vertebre
{
protected:
    unsigned int pattes;
    std::string pelage;

public:
    Vertebre(int nb_pattes, std::string const& type_pelage);
    virtual ~Vertebre();
    virtual void affiche()=0;        //question 2 : le mot clé virtual indique au compilateur d'appeler 
    unsigned int get_pattes();       //les méthodes de la classe fille ( et non celle de la classe mère )
    std::string const& get_pelage();  // important : le mot clé virtual se déclare toujours dans le head ( .h ou .hpp )
                                      // et jamais dans le .cpp des implémentations des méthodes.
};

//PARTIE 3 : ABSTRACTION
//la syntaxe `=0` après la méthode affiche :
// - rend la classe abstraite, c'est à dire non instanciable dans le main
// - rend la méthode pure et donc la redéfinir est obligatoire dans les classes dérivées.