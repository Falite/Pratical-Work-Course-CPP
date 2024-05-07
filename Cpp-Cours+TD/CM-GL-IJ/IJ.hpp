#ifndef IJ_H_
#define IJ_H_

class IJ{
protected:
    int i;
    int j;
public:
    IJ(int=0,int=0);
    virtual ~IJ();
    IJ(const IJ &other);
    IJ &operator=(const IJ &other);
    int geti();
    int getj();
    friend bool operator<(const IJ,const IJ);
}

endif /* IJ_H_ */