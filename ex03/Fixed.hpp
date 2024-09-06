#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
	private:
		int	_value;
		static const int _bits = 8;
	
	public:
		//Cnnonical Orthodox elements
		Fixed();
		Fixed (const Fixed &fixed2);
		Fixed const &operator=(const Fixed &fixed2);
		~Fixed();

		// overload constructors
		Fixed (const int i);
		Fixed (const float f);

		// member functions
		int	getRawBits(void) const;
		void setRawBits(int raw);

		float	toFloat(void) const;
		int		toInt(void) const;

		//comparison operators
		bool	operator>(const Fixed &fixed2) const;
		bool	operator<(const Fixed &fixed2) const;
		bool	operator>=(const Fixed &fixed2) const;
		bool	operator<=(const Fixed &fixed2) const;
		bool	operator==(const Fixed &fixed2) const;
		bool	operator!=(const Fixed &fixed2) const;

		//arithmetic operators
		Fixed	operator+(const Fixed &fixed2);
		Fixed	operator-(const Fixed &fixed2);
		Fixed	operator*(const Fixed &fixed2);
		Fixed	operator/(const Fixed &fixed2);

		//increment_decrement operators
		Fixed	&operator++();
		Fixed	&operator--();
		Fixed	operator++(int);
		Fixed	operator--(int);

		//static member functions
		static const Fixed &max(const Fixed &fixed1, const Fixed &fixed2);
		static Fixed &max(Fixed &fixed1, Fixed &fixed2);
		static const Fixed &min(const Fixed &fixed1, const Fixed &fixed2);
		static Fixed &min(Fixed &fixed1, Fixed &fixed2);
};

std::ostream &operator<<(std::ostream &o, const Fixed &fixed);

#endif