#ifndef ICHARACTER_HPP
# define ICHARACTER_HPP

#include <string>
#include <iostream>
class AMateria;

class ICharacter{
	public :
		virtual ~ICharacter(void);
		virtual std::string const & getName(void) const = 0;
		virtual void equip(AMateria* ma) = 0;
		virtual void unequip(int idx) = 0;
		virtual void use(int idx, ICharacter& target) = 0;
};

#endif