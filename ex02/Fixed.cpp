#include "Fixed.hpp"

// Canonical Orthodox Elements
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
	// std::cout<<"Int constructor called\n";

	_value = i << 8;
}

Fixed::Fixed(const float f)
{
	// std::cout<<"Float constructor called\n";
	_value = static_cast<int>(roundf(f * (1 << _bits)));
}

// getters and setters
int Fixed::getRawBits() const
{
	return _value;
}

void Fixed::setRawBits(int raw)
{
	_value = raw;
}

float	Fixed::toFloat(void) const
{
	return (static_cast<float> (_value) / 256);
}

int		Fixed::toInt() const
{
	return (_value >> _bits);
}
// Comparison Operators
bool	Fixed::operator>(const Fixed &fixed2) const
{
	return (this->_value > fixed2._value);
}

bool	Fixed::operator<(const Fixed &fixed2) const
{
	return (this->_value < fixed2._value);
}

bool	Fixed::operator>=(const Fixed &fixed2) const
{
	return (this->_value >= fixed2._value);
}

bool	Fixed::operator<=(const Fixed &fixed2) const
{
	return (this->_value <= fixed2._value);
}

bool	Fixed::operator==(const Fixed &fixed2) const
{
	return (this->_value == fixed2._value);
}

bool	Fixed::operator!=(const Fixed &fixed2)  const
{
	return (this->_value != fixed2._value);
}
//arithmetic operators
Fixed	Fixed::operator+(const Fixed &fixed2)
{
	Fixed newFixed;
	newFixed._value = this->_value + fixed2._value;
	return newFixed;
}

Fixed	Fixed::operator-(const Fixed &fixed2)
{
	Fixed newFixed;
	newFixed._value = this->_value - fixed2._value;
	return newFixed;
}

Fixed	Fixed::operator*(const Fixed &fixed2)
{
	Fixed newFixed (this->toFloat() * fixed2.toFloat());
	return newFixed;
}

Fixed	Fixed::operator/(const Fixed &fixed2)
{
	Fixed newFixed (this->toFloat() / fixed2.toFloat());
	return newFixed;
}

//increment_decrement operators
Fixed	&Fixed::operator++()
{
	_value++;
	return *this;
}

Fixed	&Fixed::operator--()
{
	_value--;
	return *this;
}

Fixed	Fixed::operator++(int)
{
	Fixed temp = *this;
	(this->_value)++;
	return (temp);
}

Fixed	Fixed::operator--(int)
{
	Fixed temp = *this;
	(this->_value) --;
	return (temp);
}

//Static member functions
Fixed const &Fixed::max(const Fixed &fixed1, const Fixed &fixed2)
{
	if (fixed1 > fixed2)
		return fixed1;
	return fixed2;
}
Fixed &Fixed::max(Fixed &fixed1, Fixed &fixed2)
{
	if (fixed1 > fixed2)
		return fixed1;
	return fixed2;
}
Fixed const &Fixed::min(const Fixed &fixed1, const Fixed &fixed2)
{
	if (fixed1 < fixed2)
		return fixed1;
	return fixed2;
}
Fixed &Fixed::min(Fixed &fixed1, Fixed &fixed2)
{	
	if (fixed1 < fixed2)
		return fixed1;
	return fixed2;
}
std::ostream &operator<<(std::ostream &o, Fixed const &fixed)
{
	o << fixed.toFloat();
	return (o);
}