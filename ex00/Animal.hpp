#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal{
	public :
		Animal(void);
		Animal(std::string type);
		Animal(Animal const & beast);
		virtual ~Animal(void);
	
		std::string getType(void)const;
		void	setType(std::string type);
		Animal& operator=(Animal const & beast);
		virtual void	makeSound(void)const;
	protected :
		std::string p_Type;
};

#endif