#include "Dog.hpp"

Dog::Dog(void): Animal("Dog"){
	std::cout << "Default dog constructor called" << std::endl;
}

Dog::Dog(Dog const & goodBoy){
	std::cout << "Copy Dog constrcutor called" << std::endl;
	this->p_Type = goodBoy.p_Type;
}

Dog::~Dog(void){
	std::cout << "Default constructor called" << std::endl;
}

Dog& Dog::operator=(Dog const & goodBoy){
	this->p_Type = goodBoy.p_Type;
	return *this;
}

void Dog::makeSound(void)const {
	std::cout << "Wouf!" << std::endl;
}