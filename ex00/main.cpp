#include "./Templates.hpp"

/*int main()
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
}*/

int main( void ) {
int a = 2;
int b = 3;
::swap( a, b );
std::cout << "a = " << a << ", b = " << b << std::endl;
std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
std::string c = "chaine1";
std::string d = "chaine2";
::swap(c, d);
std::cout << "c = " << c << ", d = " << d << std::endl;
std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
return 0;
}
