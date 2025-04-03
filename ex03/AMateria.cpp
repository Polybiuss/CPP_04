#include "AMateria.hpp"

AMateria::AMateria(void){
	std::cout << "Default AMateria constructor called" << std::endl;
}

AMateria::AMateria(std::string const & type): type(type){
	std::cout << "String AMateria constructor called" << std::endl;
}

AMateria::AMateria(AMateria const & materia){
	std::cout << "Copy AMateria constructor called" << std::endl;
	*this = materia;
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

AMateria* AMateria::clone(void)const{
	std::cout << "not allowed functions in class AMateria" << std::endl;
	return NULL;
}