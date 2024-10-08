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
		Fixed &operator=(const Fixed &fixed2);
		~Fixed();

		// overload constructors
		Fixed (const int i);
		Fixed (const float f);

		// member functions
		int	getRawBits(void) const;
		void setRawBits(int raw);

		float	toFloat(void) const;
		int		toInt(void) const;


};

std::ostream &operator<<(std::ostream &o, const Fixed &fixed);

#endif