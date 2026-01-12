#include "iter.hpp"

void testFunc(int &b)
{
    std::cout << b << "\n";
}
void test(std::string &b)
{
    std::cout << b;
}

int main()
{
    int array[5] = {0, 1, 2, 4, 5};
    std::string t[5] = {"he", "llo", " wo", "rld\n"};
    ::iter(array, 5, testFunc);
    ::iter(t, 5, test);
}
