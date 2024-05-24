/*
 * mat.h
 *
 *  Created on: 4 mars 2024
 *      Author: dtromeur
 */

#ifndef MAT_H_
#define MAT_H_
#include <iostream>
#include <fstream>

class mat {
protected:
	int n; //rows
	int m; //columns
public:
	mat(int =1, int =1);
	virtual ~mat();
	mat(const mat &other);
	mat& operator=(const mat &other);
};

#endif /* MAT_H_ */
