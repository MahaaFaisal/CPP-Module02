#include "Fixed.hpp"

Fixed::Fixed() : _value(0)
{
	// std::cout<<"Default constructor called\n";
}

Fixed::Fixed(const Fixed &other)
{
	// std::cout<<"Copy constructor called\n";
	*this = other;
}

Fixed &Fixed::operator=(const Fixed &other)
{
	// std::cout<<"Copy assignment operator called\n";
	if (this != &other) 
	{
		_value = other.getRawBits();
	}
	return *this;
}

Fixed::~Fixed()
{
	// std::cout<<"Destructor called\n";
}

Fixed::Fixed(const int i)
{
	_value = i << 8;
}


Fixed::Fixed(const float f)
{
	_value = static_cast<int>(roundf(f * (1 << _bits)));
}


int Fixed::getRawBits() const
{
	// std::cout<<"getRawBits member function called\n";
	return _value;
}

void Fixed::setRawBits(int raw)
{
	_value = raw;
}

float	Fixed::toFloat(void) const
{
	// float f;

	return (static_cast<float> (_value) / 256);
}

int		Fixed::toInt() const
{
	return (_value >> _bits);
}

std::ostream &operator<<(std::ostream &o, Fixed const fixed)
{
	o << fixed.toFloat();
	return (o);
}