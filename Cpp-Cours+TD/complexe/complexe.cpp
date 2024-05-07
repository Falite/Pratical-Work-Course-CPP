#include "complexe.h"

complexe ::complexe(double x,double y){
    this->x=x;
    this->y=y;
}

complexe::~complexe(){
    
}

complexe& complexe::oprator=(const complexe &other){
    if(this!=&other){
        this->x=other.x;
        this->y=other.y;
    }
}
    virtual complexe::~complexe(){

    }
    void setx(double z){
        this->x=z;
    }
    void sety(double z){
        this->y=z;
    }
    double getx(){
        double z;
        z=this->x;
        return z;
    }
    double gety(){
        double z;
        z=this->y;
        return z;
    }
    double real();
    double imag();