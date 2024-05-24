/*
 * IJ.h
 *
 *  Created on: 8 avr. 2024
 *      Author: dtromeur
 */

#ifndef IJ_H_
#define IJ_H_

class IJ {
protected:
	int i;
	int j;
public:
	IJ(int=0, int =0);
	virtual ~IJ();
	IJ(const IJ &other);
	IJ& operator=(const IJ &other);
	int geti()const;
	int getj()const;
    friend bool operator<(const IJ, const IJ);      //Q1 : la surcharge de l'opérateur "<" est indispensable pour utiliser IJ en clé d'une map.
};

#endif /* IJ_H_ */
