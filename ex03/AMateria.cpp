#include "AMateria.hpp"

AMateria::AMateria(void){
	std::cout << "Default AMateria constructor called" << std::endl;
}

AMateria::AMateria(std::string const & type): type(type){
	std::cout << "String AMateria constructor called" << std::endl;
}

AMateria::~AMateria(void){
	std::cout << "Default AMateria desctructor called" << std::endl;
}

std::string const & AMateria::getType(void)const {
	return this->type;
}

AMateria& AMateria::operator=(AMateria const & materia){
	this->type = materia.type;
	return *this;
}

void AMateria::setType(std::string const & type){
	this->type = type;
}

void AMateria::use(ICharacter& target){
	std::cout << "you can't use pure AMateria on " << target.getName() << std::endl;
}
