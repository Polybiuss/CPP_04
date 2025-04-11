#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <iostream>
#include <string>
#include "ICharacter.hpp"

class AMateria{
	protected :
		std::string type;
	
	public :
		AMateria(void);
		AMateria(std::string const & type);

		virtual ~AMateria(void);

		std::string const & getType(void) const;
		void	setType(std::string const & type);

		AMateria& operator=(AMateria const & meteria);
		virtual AMateria* clone(void) const = 0;
		virtual void use(ICharacter& target);
};

#endif