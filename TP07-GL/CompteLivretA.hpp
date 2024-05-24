//
//  CompteLivretA.hpp
//  TP07-GL
//
//  Created by Abdoullatif Omarjee on 22/05/2024.
//

#ifndef CompteLivretA_hpp
#define CompteLivretA_hpp
#include "compte.hpp"
#include <stdio.h>

class CompteLivretA : public Compte {
private:
    static double taux;
public:
    CompteLivretA();
    ~CompteLivretA();
    
    
    double interet();
    void update();
    virtual void affiche()const;
};

#endif /* CompteLivretA_hpp */
