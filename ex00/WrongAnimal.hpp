#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>
#include <string>

class WrongAnimal{
	public :
		WrongAnimal(void);
		WrongAnimal(std::string type);
		WrongAnimal(WrongAnimal const & wa);
		~WrongAnimal(void);

		void	setType(std::string type);
		std::string	getType(void) const;
		WrongAnimal&	operator=(WrongAnimal const & wa);
		virtual void	makeSound(void) const;
	
	protected :
		std::string p_type;
};

#endif