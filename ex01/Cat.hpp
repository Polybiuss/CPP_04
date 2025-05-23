#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal{
	public :
		Cat(void);
		Cat(Cat const & kitten);
		~Cat(void);

		Cat&	operator=(Cat const & kitten);
		void	makeSound(void)const;
	
	private :
		Brain* _brain;
};

#endif