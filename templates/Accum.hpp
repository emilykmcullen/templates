//
//  Accum.hpp
//  templates
//
//  Created by Emily Cullen on 29/04/2021.
//

#ifndef Accum_hpp
#define Accum_hpp

#include <stdio.h>

//EXAMPLE OF TEMPLATE CLASS

template <class T>
class Accum {
private:
    T total;

public:
    Accum(T start) : total(start) {};
    
    //operator overload
    T operator+=(T const& t){ return total = total + t; };
    
    T GetTotal() const { return total; }
};

#endif /* Accum_hpp */
