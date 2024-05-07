#ifndef AIJ_H_
#define AIJ_H_

class AIJ{
protected:
    int n;
    int nz;
    coeff* A;
public:
    AIJ(int n=0,int nz=0,coeff* =0);
    virtual ~1IJ();
    AIJ(const AIJ &other);
    AIJ& operator=(const AIJ &other);
}

#endif