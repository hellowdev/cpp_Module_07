#pragma once

template <typename T>
Array<T>::Array()
{   
    array = NULL;
    sizeMe = 0;
}

template <typename T>
Array<T>::Array(unsigned int n) : sizeMe(n)
{
    array = new T[n];
}

template <typename T>
Array<T>::Array(const Array &original)
{
    if (this != &original)
    {
        sizeMe = original.size();
        array = new T[sizeMe];
        for (unsigned int i = 0; i < sizeMe; i++)
            array[i] = original.array[i];
    }
}

template <typename T>
Array<T>& Array<T>::operator=(const Array &original)
{
    if (this != &original)
    {
        sizeMe = original.size();
        delete[] array;
        array = new T[sizeMe];
        for (unsigned int i = 0; i < sizeMe; i++)
            array[i] = original.array[i];
    }
    return (*this);
}

template <typename T>
T& Array<T>::operator[](unsigned int check)
{
    if (check >= sizeMe || !array)
        throw std::out_of_range("out of bounds");
    return array[check];
}

template <typename T>
const T& Array<T>::operator[](unsigned int check) const
{
    if (check >= sizeMe || !array)
        throw std::out_of_range("out of bounds");
    return array[check];
}

template <typename T>
unsigned int Array<T>::size() const
{
    return sizeMe;
}

template <typename T>
Array<T>::~Array()
{
    delete[] array;
}