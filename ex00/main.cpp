#include "./Templates.hpp"

int main()
{
	double i = 5.55;
	char j = 'c';

	std::cout << i << std::endl;
	std::cout << j << std::endl;

	Swap(i, j);
	std::cout << i << std::endl;
	std::cout << j << std::endl;
	
	std::cout << "-----------------------------------------------" << std::endl;

	std::cout << Min(j, i) << std::endl;
	
	std::cout << "-----------------------------------------------" << std::endl;

	std::cout << Max(j, i) << std::endl;
}
