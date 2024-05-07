#ifndef polynome_hpp
#define polynome_hpp
#include <iostream>

template<class T>class poly {
protected:
    std::map<int,T>coef;
public:
    poly(std::map<int,T>=std::map<int,T>());
    virtual ~poly();
    poly(const poly<T> &other);
    poly&<T> operator=(const poly<T> &other);

    friend std::ostream& operato<<(std::ostream& , poly<T>);
    void insert(int , T);

}


#endif /* polynome_hpp */