#include "Array.hpp"

int main(int, char**)
{
    Array<int> b(20);
    Array<int> a(10);
    Array<int> c = b;    
  
    try
    {
        c[19] = 10;
        std::cout << c[19] << '\n';
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    try
    {
        b[20] = 4;
        std::cout << b[2] << '\n';
        
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    b = a;
    try
    {
        b[-1];
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return 0;
}