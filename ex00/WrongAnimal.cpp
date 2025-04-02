#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void){
	std::cout << "Default WrongAnimal constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type): p_type(type){
	std::cout << "String WrongAnimal constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const & wa){
	std::cout << "Copy WrongAnimal constructor called" << std::endl;
	*this = wa;
}

WrongAnimal::~WrongAnimal(void){
	std::cout << "Default WrongAnimal destrcutor called" << std::endl;
}

void	WrongAnimal::setType(std::string type){
	this->p_type = type;
}

std::string WrongAnimal::getType(void)const {
	return this->p_type;
}

WrongAnimal& WrongAnimal::operator=(WrongAnimal const & wa){
	this->p_type = wa.getType();
	return *this;
}

void	WrongAnimal::makeSound(void)const {
	std::cout << "Urecongized WrongAnimal!" << std::endl;
}