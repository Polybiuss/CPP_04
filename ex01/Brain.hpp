#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>
#include <string>

class Brain{
	public :
		Brain(void);
		Brain(Brain const & br);
		~Brain(void);

		Brain& operator=(Brain const & br);

};

#endif