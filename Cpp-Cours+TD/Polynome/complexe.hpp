//
//  complexe.hpp
//  Complexe2
//
//  Created by Abdoullatif Omarjee on 25/03/2024.
//

#ifndef complexe_hpp
#define complexe_hpp

#include <stdio.h>
template <class T> class complexe{
protected:
    T x;
    T y;
public:
    complexe(T =T(),T =T());
    virtual ~complexe();
    complexe(const complexe &other);
    complexe& operator=(const complexe<T> &other);
};
#endif /* complexe_hpp */
