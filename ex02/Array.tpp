#pragma once

template <typename T>
Array<T>::Array()
{
    T array[0];
}

template <typename T>
Array<T>::Array(unsigned int n) : sizeMe(n)
{
    // std::cout << n << '\n';
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

int    idk(unsigned int check)
{
    try
    {
        if (check >= sizeMe || check < 0)
            throw std::out_of_range("out of bounds");
        return 1;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return 0;
}

template <typename T>
unsigned int Array<T>::operator[](unsigned int check)
{
    if (check)
      
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