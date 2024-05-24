/*
 * matAIJ.h
 *
 *  Created on: 8 avr. 2024
 *      Author: dtromeur
 */

#ifndef MATAIJ_H_
#define MATAIJ_H_
#include <iostream>
#include <map>
#include "mat.h"
#include "IJ.h"
using namespace std;

template<typename T>   //Q2 : la généricité s'écrit avec "typename"
class matAIJ : public mat {
protected:
    map<IJ,T> a;

public:
	matAIJ(int n=1, int m=1);
	matAIJ(const matAIJ &other);
	matAIJ& operator=(const matAIJ &other);
	virtual ~matAIJ();
    static int compteur;

	void insert(int,int, T);

	void matve(T* x,T *y);

};

#endif /* MATAIJ_H_ */
