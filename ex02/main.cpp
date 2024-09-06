
#include "Fixed.hpp"

int main( void )
{
	Fixed a;
	Fixed  b( Fixed( 5.05f ) * Fixed( 2 ) );
	Fixed const c = Fixed::max( a, b );

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl << std::endl;
	std::cout << a;

	std::cout << std::endl;
	std::cout <<"b: ";
	std::cout << std::endl;
	std::cout << b;
	std::cout << std::endl;
	std::cout << c << std::endl;
	return 0;
}