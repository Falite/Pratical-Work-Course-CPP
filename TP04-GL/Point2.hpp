//
//  Point2.hpp
//  TP04-GL
//
//  Created by Abdoullatif Omarjee on 17/04/2024.
//

#pragma once

#include <cstddef>
#include <cmath>
#include <ostream>

//PARTIE 1 : le template : 
template <typename T>
class Point2 {
private:
    std::size_t m_size;
    T* data;                  //c'est un pointeur sur un objet générique.
public:
    Point2(){
        m_size=0;
        data= nullptr;
    };
    
    
    Point2(std::size_t size){
        if(m_size != size){
            delete[] data;       // dans ce cas là , on ne doit pas oublier de libérer la mémoire avant de réaffecter.
            m_size=size;
            data= new T[m_size];
        }
    };
    ~Point2(){
        delete[] data;           //idem
    }
    
    std::size_t size(){
        return m_size;
    };
    
    T& operator[] (int i){
        return data[i];
    };
    
    double norme(){
        T result = 0;
        for (std::size_t i = 0; i < size(); ++i)
            result += data[i] * data[i];
        return std::sqrt(result);
    };
    
};

template<typename T>
std::ostream& operator<< (std::ostream& out, Point2<T>& pt){
    out << "Point(";
    for (std::size_t i = 0; i < pt.size(); ++i)
        out << pt[i] << ((i < pt.size() - 1) ? "," : "");
    out << ")";
    return out;
};
