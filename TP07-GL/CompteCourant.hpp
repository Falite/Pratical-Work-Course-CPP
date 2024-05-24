//
//  CompteCourant.hpp
//  TP07-GL
//
//  Created by Abdoullatif Omarjee on 22/05/2024.
//

#ifndef CompteCourant_hpp
#define CompteCourant_hpp

#include <stdio.h>
#include "compte.hpp"

class CompteCourant : public Compte {
private:
    double debit;
public:
    CompteCourant();
    ~CompteCourant();
    
    void retrait(double montant);;
    double solde()const;
    void update();
    void affiche()const;
};
#endif /* CompteCourant_hpp */
