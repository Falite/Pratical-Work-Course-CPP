#include <iostream>

#include "vertebre.hpp"

Vertebre::Vertebre(int nb_pattes, std::string const& type_pelage)
    // : pattes(nb_pattes), pelage(type_pelage) // <- ou liste d'initialisation
{
    pattes = nb_pattes;
    pelage = type_pelage;
    std::cout << std::endl;
    std::cout << "Constructeur Vertebre" << std::endl;
    std::cout << std::endl;
}

Vertebre::~Vertebre()
{
    std::cout << std::endl;
    std::cout << "Le vertebre est invertébré" << std::endl;
    std::cout << std::endl;
}

void Vertebre::affiche()
{
    std::cout
        << "Vertebre avec "
        << pattes << " pattes et des "
        << pelage << std::endl;
}

unsigned int Vertebre::get_pattes()
{
    return pattes;
}

std::string const& Vertebre::get_pelage()
{
    return pelage;
}
