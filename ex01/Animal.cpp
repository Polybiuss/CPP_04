#include "Animal.hpp"

Animal::Animal(void): p_Type("default_animal"){
	std::cout << "Default Animal constructor called" << std::endl;
}

Animal::Animal(std::string type): p_Type(type){
	std::cout << "String Animal constructor called" << std::endl;
}

Animal::Animal(Animal const & beast){
	std::cout << "Copy Animal constructor called" << std::endl;
	this->p_Type = beast.p_Type;
}

Animal::~Animal(void){
	std::cout << "Default destrcutot called" << std::endl;
}

std::string	Animal::getType(void)const {
	return this->p_Type;
}

void	Animal::setType(std::string type){
	p_Type = type;
}

Animal& Animal::operator=(Animal const & beast){
	p_Type = beast.p_Type;
	return *this;
}

void	Animal::makeSound(void)const {
	std::cout << "Unrecognized animal!" << std::endl;
}