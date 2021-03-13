#include <iostream>

/**
 * @brief swap value of two integer
 * 
 * @param a first value
 * @param b second value
 */

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}


int main(int argc, char **argv) 
{
    int val1 = 10;
    int val2 = 20;
    
    std::cout << "Before swap: " << std::endl
    << "First value: " << val1 << std::endl
    << "Second value: " << val2 << std::endl;
    swap(val1, val2);

    std::cout << "Before swap: " << std::endl
    << "First value: " << val1 << std::endl
    << "Second value: " << val2 << std::endl;

}