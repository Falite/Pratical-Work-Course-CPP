#include <iostream>
#include <cmath> // Pour la fonction puissance std::pow


#include "point_outofline.hpp"
#include "Point2.hpp"
#define N 1


int main()
{
    // Point placé à l'origine par défaut
    Point<double,4> pt;
    std::cout << "pt = " << pt << std::endl;
    std::cout << "||pt|| = " << pt.norme() << std::endl;
    std::cout << std::endl;

    
    //Point de dimension 1 placé à l'origine par défaut
    Point<double,1> pti;
    std::cout << "pti = " << pti << std::endl;
    std::cout << "||pti|| = " << pti.norme() << std::endl;
    std::cout << std::endl;
    
    //Remplissage de du point
    pti[0] = -3.14;
    std::cout << "pti = " << pti << std::endl;
    std::cout << "||pti|| = " << pti.norme() << std::endl;
    std::cout << std::endl;
    
    // Quelques informations sur ce point
    std::cout
        << " pti occupe " << sizeof(pti) << " octets en mémoire."
        << std::endl;
    
    
    // Remplissage générique du point (pour faciliter le boulot)
    for (std::size_t i = 0; i < pt.size(); ++i)
        pt[i] = static_cast<double>(std::pow(-1, i) * (i + 1));

    std::cout << "pt = " << pt << std::endl;
    std::cout << "||pt|| = " << pt.norme() << std::endl;
    std::cout << std::endl;

    // Quelques informations sur ce point
    std::cout
        << "pt est de dimension " << pt.size()
        << " et occupe " << sizeof(pt) << " octets en mémoire."
        << std::endl;
    
    //Point2 allouée dynamiquement
    Point2<double> pt2dyn(N);
    Point<double,N> pt2nondyn;
    
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << "Bonus : " << std::endl;
    
    if(sizeof(pt2dyn)>sizeof(pt2nondyn)){
        std::cout << " l'allocation dynamique occupe plus de mémoire que la spécification via le template" << std::endl;
    }
    else{
        std::cout << " la spécification via template occupe plus de mémoire que l'allocation dynamique" << std::endl;
    }
    
    std::cout << std::endl;
    std::cout << pt2dyn.size() << std::endl;
    std::cout << "occupation mémoire dans le cas allocation dynamique : " << sizeof(pt2dyn) << std::endl;
    std::cout << "occupation mémoire dans le cas de spécification via template : " << sizeof(pt2nondyn) << std::endl;
    return 0;
}
