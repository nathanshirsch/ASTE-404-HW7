#include<iostream>
#include "Vec.h"
#include <gtest/gtest.h>

/**
 * \mainpage Escription
 * The main function checks the overwritten operators
 * created in the Vec.h file
 * @code int main() {
 * double3 a{0,1,2}; 
 * double3 b{0,0,1}; 
 * std::cout<<a-b<<std::endl
 * std::cout<<dot(a,b)<<std::endl;
 * return 0; }
 * @endcode  
*/

int main()
{   
    double3 a{0,1,2}; //!<this creates the a vector*/
    double3 b{0,0,1}; //!<this creates the b vector*/

    std::cout<<a-b<<std::endl;
    std::cout<<dot(a,b)<<std::endl;
    return 0;
}