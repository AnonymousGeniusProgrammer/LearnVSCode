#include <iostream>
#include "swap.hpp"

int main(int argc, char **argv)
{
    int val1 = 10;
    int val2 = 20;
    
    std::cout << "Before swap: " << std::endl
    << "First value: " << val1 << std::endl
    << "Second value: " << val2 << std::endl;
    swap swaper = swap();
    swaper.doSwap(val1, val2);
 
    std::cout << "Before swap: " << std::endl
    << "First value: " << val1 << std::endl
    << "Second value: " << val2 << std::endl;
    std::cout << "I am modifying programm" << std::endl;
}