#include "IJ.hpp"

IJ::IJ(int i, int j){
    this->i=i;
    this->j=j
}

IJ::~IJ(){

}

IJ::IJ(const IJ &other){
    this->i=other.i;
    this->j=other.j
}


IJ& IJ::operator=(const IJ &other){
    if(this!=&other){
        this->i=other.i;
        this->j=other.j;
    }
    return *this;
}
    
bool IJ::operator<(const IJ ij1,const IJ ij2){
    if(ij1.i<ij2.i){
        return true;
    }
    else{
        if(ij1.j==ij2.j){
            if(ij1.j < ij2.j){
                return true;
            }
        }
    }
    return false;
}

int IJ::geti(){
    return this->i;
}
int IJ::getj(){
    return this->j;
}