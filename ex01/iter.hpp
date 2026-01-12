#pragma once
#include <iostream>

template <typename T, typename R, typename P>
void iter(T *arr, const int len, R func(P&))
{
    for (int i = 0; i < len; i++)
    {
        func(arr[i]);
    }
}