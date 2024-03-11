#include "./Array.hpp"

int main()
{
    try
	{
        // Test the Array class
        Array<int> intArray(5);
        for (unsigned int i = 0; i < intArray.size(); ++i)
		{
            intArray[i] = i * 2;
    	}
        // Copy constructor test
        Array<int> copyArray(intArray);
        // Assignment operator test
        Array<int> assignArray = intArray;
        // Displaying elements
        for (unsigned int i = 0; i < intArray.size() + 1 ; ++i)
		{
            std::cout << "intArray[" << i << "]: " << intArray[i] << "\t";
            std::cout << "copyArray[" << i << "]: " << copyArray[i] << "\t";
            std::cout << "assignArray[" << i << "]: " << assignArray[i] << std::endl;
        }
    }
	catch (const std::exception& e)
	{
        std::cerr << "Exception: " << e.what() << std::endl;
    }
    return 0;
}
