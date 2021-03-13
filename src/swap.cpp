#include "swap.hpp"

void swap::doSwap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
