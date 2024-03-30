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

class Vertebre {
protected:
    int m_pattes;
    std::string m_pelage;
    
public:
    //methodes de base
    Vertebre(int pattes, std::string pelage);
    ~Vertebre();
    
    //methodes supp
    void affiche()const;
    void get_pattes()const;
    void get_pelage()const;
    friend std::ostream& operator<<(std::ostream &flux, Vertebre const& autre);
};

class Volante {
protected:
    int m_nailes;
public:
    //méthodes de base
    Volante(int nailes);
    ~Volante();
    
    //méthodes supp
    void affiche()const;
    void get_ailes()const;
    friend std::ostream& operator<<(std::ostream flux, Volante const& autre);
};

class Oiseau : public Vertebre,public Volante {
protected:
    int m_noeufs;
public:
    //methodes de base
    Oiseau(int noeufs);
    ~Oiseau();
    
    //methodes supp
    virtual void affiche()const;
    void get_oeufs()const;
    friend std::ostream& operator<<(std::ostream &flux, Oiseau const& zoizo);
};


#endif /* Vertebre_hpp */
