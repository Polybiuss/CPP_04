#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal{
	public :
		Dog(void);
		Dog(Dog const & goodBoy);
		~Dog(void);

		Dog&	operator=(Dog const & goodBoy);
		void	makeSound(void)const;

	private :
		Brain*	_brain;
};

#endif