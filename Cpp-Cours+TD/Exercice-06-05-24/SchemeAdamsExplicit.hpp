#include "integreScheme.hpp"

#ifndef SchemeAdamsExplicit_hpp
#define SchemeAdamsExplicit_hpp


template<class T>
class schemeAdamsExplicit : public integreScheme<T> {
protected:
    vector<T> f;
    T yn;
public:
    SchemeAdamsExplicit();
    SchemeAdamsExplict(schemAdamsExplicit const& autre);
    ~SchemeAdamsExplicit();
    SchemeAdamsExplicit& operator=(SchemeAdamsExplicit const& autre);
};

#endif