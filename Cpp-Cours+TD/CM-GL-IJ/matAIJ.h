#ifndef MATAIJ_H_
#define MATAIJ_H_
#include <iostream>
#include <map>
#include "mat.h"
#include "IJ.h"
using namespace std;

class matAIJ : public mat {
protected:
    map<IJ.double>a;
public:
    matAIJ(int n=1,int m=1);
    matAIJ(const matAIJ &other);
    matAIJ& operator=(const matAIJ &other);
    virtual -matAIJ();

    void insert(int i,int j,double b);
}

#endif /* MATAIJ_H_ */