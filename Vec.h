#ifndef _VEC_H
#define _VEC_H

#include <ostream>
#include <math.h>

template<typename T>
class _vec3         //generic 3D vector of type T
{
    public:
    _vec3<T>(): d{0,0,0} {}
    _vec3<T>(T a, T b, T c) : d{a,b,c} {}
    T& operator[] (int i) {return d[i];}
    T operator[] (int i) const {return d[i];}
    /**
     * a function that access local variables to redefine the addition operator
     * @param[in] two vectors
     * @return Sum of two vectors
    */
    friend _vec3<T> operator+(const _vec3<T>&a, const _vec3<T>&b)
    {
        return _vec3<T>(a[0]+b[0],a[1]+b[1],a[2]+b[2]); 
    }
    /**
     * a function that access local variables to redefine the subtraction operator
     * @param[in] two vectors
     * @return Subtraction of of two vectors
    */
    friend _vec3<T> operator-(const _vec3<T>&a, const _vec3<T>&b)
    {
        return _vec3<T>(a[0]-b[0],a[1]-b[1],a[2]-b[2]);
    }
    /**
     * a function that defines the dot product of vectors
     * @param[in] two vectors
     * @return Dot product of two vectors
    */
    friend T dot(const _vec3<T>&a, const _vec3<T>&b)
    {
        return a[0]*b[0]+a[1]*b[1]+a[2]*b[2];
    }
    /**
     * a function that access local variables to define the magnitude of a vector
     * @param[in] two vectors
     * \f$ [\sqrt{a[0]^2+a[1]^2+a[2]^2}] \f$
     * @return The magnitude of a vector
    */
    friend double mag(const _vec3<T>&a)
    {
        return sqrt(dot(a,a));
    }
    /**
     * a function that access local variables to redefine the arrow operator for outputting
     * @param[in] one vectors and an out type object
     * @return The string of the value of each index of the vector
    */
    friend std::ostream& operator<<(std::ostream &out, const _vec3<T>&a)
    {
        out<<a[0]<<" "<<a[1]<<" "<<a[2];
        return out;
    }

    protected:
    T d[3];
};

using double3 = _vec3<double>;  //assign a nickname

#endif