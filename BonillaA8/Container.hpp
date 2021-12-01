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

template <class T>
class Container
{
private:

    T *dataPtr; // data
    T *keyPtr;  // key
    int num; //number of elements
    int SIZE;
    
//    default constructor
    Container();

///    member functions
    //setters
    
    //getters
    
    //operator [] overload
//    Destructor
    ~Container();
    
    
};








#endif /* Container_hpp */
