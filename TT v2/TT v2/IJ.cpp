/*
 * IJ.cpp
 *
 *  Created on: 8 avr. 2024
 *      Author: dtromeur
 */

#include "IJ.h"

IJ::IJ(int i, int j) {
	this->i=i;
	this->j=j;
}

IJ::~IJ(){
}

IJ::IJ(const IJ &other) {
	this->i=other.i;
	this->j=other.j;

}

IJ& IJ::operator=(const IJ &other) {
	if (this!=&other){
		this->i=other.i;
		this->j=other.j;
	}
    return *this;
}

bool operator<(const IJ ij1, const IJ ij2){
	if (ij1.i<ij2.i) {return true; } else {
		if (ij1.i==ij2.i) {
			if (ij1.j < ij2.j){ return true;}
		}
	}
	return false;
}

int IJ::geti()const {return this->i;}
int IJ::getj()const {return this->j;}
















