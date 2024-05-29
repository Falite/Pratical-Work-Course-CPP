//
//  Vertebre.hpp
//  TP03 GL
//
//  Created by Abdoullatif Omarjee on 27/03/2024.
//

#ifndef Vertebre_hpp
#define Vertebre_hpp

#include <stdio.h>
#include <iostream>

/*PARTIE 1 :              VERTEBRE                */
class Vertebre {
protected:    //on choisit cette protection pour qu'elle passe en private durant l'héritage public
    int m_pattes;
    std::string m_pelage;
    
public:
    //methodes de base
    Vertebre(int pattes, std::string pelage);
    ~Vertebre();
    
    //methodes supp
    void affiche()const;     
    int get_pattes()const;
    std::string get_pelage()const;

    //PARTIE 4 : BONUS
    friend std::ostream& operator<<(std::ostream &flux, Vertebre const& autre);
};

/*PARTIE 2 :           OISEAU              */
class Oiseau : public Vertebre,public Volante {
protected:
    int m_noeufs;
public:
    //methodes de base
    Oiseau(int noeufs);
    ~Oiseau();
    
    //methodes supp
    virtual void affiche()const;
    int get_oeufs()const;

    //PARTIE 4 : BONUS
    friend std::ostream& operator<<(std::ostream &flux, Oiseau const& zoizo);
};

/*PARTIE 3 :            VOLANTE             */
class Volante {
protected:
    int m_nailes;
public:
    //méthodes de base
    Volante(int nailes);
    ~Volante();
    
    //méthodes supp
    void affiche()const;
    int get_ailes()const;

    //PARTIE 4 : BONUS
    friend std::ostream& operator<<(std::ostream &flux, Volante const& autre);
};

#endif /* Vertebre_hpp */