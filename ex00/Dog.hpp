#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal{
	public :
		Dog(void);
		Dog(Dog const & goodBoy);
		~Dog(void);

		Dog&	operator=(Dog const & goodBoy);
		void	makeSound(void)const;
};

#endif