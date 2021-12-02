//
//  Container.hpp
//  BonillaA8
//
//  Created by Roem Bonilla on 11/30/21.
//

#ifndef Container_hpp
#define Container_hpp

#include <stdio.h>
#include <string>
#include <iostream>
using namespace std;

template <class T1, class T2>
class Container
{
private:

    T1 *dataPtr; // data
    T2 *keyPtr;  // key
    int num; //number of elements
    int SIZE;
    
//    default constructor
    Container();

///    member functions
    //setters
    void setData(T1);
    void setKey(T2);
    //getters
    T1 getKey() const;
    T2 getData() const;
    //operator [] overload
    T1& operator[] (const T1&);
//    Destructor
    ~Container();
    
    
};








#endif /* Container_hpp */
