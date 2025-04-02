#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal{
	public :
		WrongCat(void);
		WrongCat(WrongCat const & bc);
		~WrongCat(void);

		WrongCat& operator=(WrongCat const & wc);
		void	makeSound(void) const;
};

#endif