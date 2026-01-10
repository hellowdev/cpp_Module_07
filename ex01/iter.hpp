#pragma once
#include <iostream>

// template <typename T> void iter(T arr[], const int len, T (*testFunc)(T &))
// {
//     for (int i = 0; i < len; i++)
//     {
//         testFunc(arr[i]);

//     }
// }
template <typename T, typename F>
void iter(T arr, const int len, F testFunc)
{
    for (int i = 0; i < len; i++)
    {
        arr[0] = 10;
        testFunc(arr[i]);
    }
}