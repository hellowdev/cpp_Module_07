#pragma once
#include <iostream>

template <typename T> class Array
{
    private:
        unsigned int sizeMe;
        T *array;
    public:
        Array();
        Array(unsigned int n);
        Array(const Array &original);
        Array& operator=(const Array &original);
        T& operator[](unsigned int check);
        const T& operator[](unsigned int check) const;
        unsigned int size() const;
        ~Array();
};


#include "Array.tpp"