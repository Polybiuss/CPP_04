#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "ICharacter.hpp"

class Character: public ICharacter{
	public :
		Character(void);
		Character(std::string name);
		Character(Character const & pl);
		~Character(void);
		
		std::string const & getName(void)const;
		void setName(std::string name);

		void equip(AMateria* ma);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
		Character& operator=(Character const & pl);

		private :
			std::string _name;
			AMateria* _bag[4];
};

#endif