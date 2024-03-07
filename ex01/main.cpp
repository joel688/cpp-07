#include "./Templates.hpp"

int main()
{
    int intArray[] = {1, 2, 3, 4, 5};
    size_t intArrayLength = sizeof(intArray) / sizeof(int);

    std::cout << "Processing intArray: ";
    iter(intArray, intArrayLength, printElement<int>);
    std::cout << std::endl;

    double doubleArray[] = {1.1, 2.2, 3.3, 4.4, 5.5};
    size_t doubleArrayLength = sizeof(doubleArray) / sizeof(double);

    std::cout << "Processing doubleArray: ";
    iter(doubleArray, doubleArrayLength, printElement<double>);
    std::cout << std::endl;

    return 0;
}
