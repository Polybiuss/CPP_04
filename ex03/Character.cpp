#include "Character.hpp"
#include "AMateria.hpp"

Character::Character(void){
	std::cout << "Default Character constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		this->_bag[i] = NULL;
}

Character::Character(std::string name): _name(name){
	std::cout << "String Character constrcutor called" << std::endl;
		for (int i = 0; i < 4; i++)
		this->_bag[i] = NULL;
}

Character::Character(Character const & pl){
	std::cout << "Copy Character constrcutor called" << std::endl;
	*this = pl;
	for (int i = 0; i < 4; i++)
	{
		if (pl._bag[i])
			this->_bag[i] = pl._bag[i]->clone();
		else
			this->_bag[i] = NULL;
	}
	
}

Character::~Character(void){
	std::cout << "Default Character destructor" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (this->_bag[i])
			delete this->_bag[i];
	}
}

std::string const & Character::getName(void)const {
	return this->_name;
}

void	Character::setName(std::string name){
	this->_name = name;
}

void	Character::equip(AMateria* m){
	int i = 0;
	while (i < 4){
		if (!this->_bag[i]){
			this->_bag[i] = m;
			break;
		}
		++i;
	}
	if (i == 4)
		std::cout << "Your bag is full!" << std::endl;
	else
		std::cout << "Your AMateria is equipped a the " << i << " th positions" << std::endl;
		
}

void	Character::unequip(int idx){
	if (idx > 3 || idx < 0)
		std::cout << "Your bag only contains 4 emplacements betweeen 0 and 3 include" <<std::endl;
	else if (!this->_bag[idx])
		std::cout << "This emplacement is empty" << std::endl;
	else{
		this->_bag[idx] = NULL;
		std::cout << "AMateria unequipped" << std::endl;
	}
}

void	Character::use(int idx, ICharacter& target){
	if (idx > 3 || idx < 0)
		std::cout << "Your bag only contains 4 emplacement between 0 and 3 included" << std::endl;
	else if (!this->_bag[idx])
		std::cout << "This emplacement is empty" << std::endl;
	else
		this->_bag[idx]->use(target);
}