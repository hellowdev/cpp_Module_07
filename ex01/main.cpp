#include "iter.hpp"

void testFunc(int &b)
{
    std::cout << b << "\n";
}
int main()
{   
    int array[5] = {0, 1, 2, 4, 5};
    ::iter(array, 5, testFunc);
    std::cout << array[0] << '\n';

}