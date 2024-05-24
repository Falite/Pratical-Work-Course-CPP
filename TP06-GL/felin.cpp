#include <iostream>

#include "felin.hpp"

Felin::Felin(std::string couleur_pelage)
    : Vertebre(4, "poils")
{
    couleur = couleur_pelage;
    std::cout << std::endl;
    std::cout << "Constructeur Felin" << std::endl;
    std::cout << std::endl;
}

Felin::~Felin()
{
    std::cout << std::endl;
    std::cout << "ayayayayaye le félin s'est mordu la queue" << std::endl;
    std::cout << std::endl;
}

void Felin::affiche()
{
    std::cout << "Felin de pelage " << couleur << ", qui est un ";
    Vertebre::affiche();
}

std::string Felin::get_couleur()
{
    return couleur;
}
