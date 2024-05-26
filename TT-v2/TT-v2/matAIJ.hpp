//
//  matAIJ.hpp
//  TT-v2
//
//  Created by Abdoullatif Omarjee on 26/05/2024.
//

#ifndef matAIJ_hpp
#define matAIJ_hpp

#include <stdio.h>
#include "IJ.hpp"
#include "mat.hpp"
#include <vector>
#include <map>

//Question 1 :
template<typename T>
class matAIJ : public mat {
protected:
    std::map<IJ,T> m_map;
    
public:
    matAIJ(int n=1,int m=1);
    matAIJ(matAIJ const& autre);
    matAIJ& operator=(matAIJ const& autre);
    ~matAIJ();
    int getn();
    int getm();
    T getvalue(int i,int j);
    void add(int i,int j, T aij);
    std::vector<T> matve(std::vector<T> x);
};

template<typename T>
std::ostream& operator<<(std::ostream& flux, matAIJ<T> const& autre);

#endif /* matAIJ_hpp */
