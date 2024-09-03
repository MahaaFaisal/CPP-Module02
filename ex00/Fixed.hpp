#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
	private:
		int	_value;
		static const int _bits = 8;
	
	public:
		Fixed();
		Fixed (const Fixed &fixed2);
		Fixed &operator=(const Fixed &fixed2);
		~Fixed();

		int	getRawBits(void) const;
		void setRawBits(int raw);
};

#endif