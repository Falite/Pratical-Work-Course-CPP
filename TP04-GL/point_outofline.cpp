//
//  point_outofline.cpp
//  TP04-GL
//
//  Created by Abdoullatif Omarjee on 30/05/2024.
//

#include <stdio.h>
#include "point_outofline.hpp"
using namespace std;

//Partie 1 : On doit déclarer la généricité dans le reste du code
template<typename T,size_t N>
Point<T,N>::Point()               //la classe est générique , donc "Point" devient
                                //"Point<T>
{
    for (std::size_t i = 0; i < N; ++i)
        data[i] = T();          //attention : le 0 devient T(), T() correspondant au "0"                        //générique
}

template<typename T,size_t N>
std::size_t Point<T,N>::size()
{
    return N;
}

template<typename T,size_t N>
T& Point<T,N>::operator[] (std::size_t i)     //attention, le type de retour du "[]" est lui                                          //aussi générique !
{
    return data[i];
}

template<typename T,size_t N>
T Point<T,N>::norme()
{
    T result = 0;
    for (std::size_t i = 0; i < size(); ++i)
        result += data[i] * data[i];
    return std::sqrt(result);
}

template<typename T,size_t N>
std::ostream& operator<< (std::ostream& out, Point<T,N>& pt)
{
    out << "Point(";
    for (std::size_t i = 0; i < pt.size(); ++i)
        out << pt[i] << ((i < pt.size() - 1) ? "," : "");
    out << ")";
    return out;
}

template<typename T>
Point<T,1>::Point(){
    data = T();
}

template<typename T>
std::size_t Point<T,1>::size(){
    return 1;
}


template<typename T>
T& Point<T,1>::operator[] (std::size_t i){
    return data;
}

template<typename T>
T Point<T,1>::norme(){
    return sqrt (data * data);
}

