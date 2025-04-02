#include "Dog.hpp"

Dog::Dog(void): Animal("Dog"){
	std::cout << "Default dog constructor called" << std::endl;
}

Dog::Dog(Dog const & goodBoy){
	std::cout << "Copy Dog constrcutor called" << std::endl;
	*this = goodBoy;
}

Dog::~Dog(void){
	std::cout << "Default constructor called" << std::endl;
}

Dog& Dog::operator=(Dog const & goodBoy){
	this->setType(goodBoy.getType());
	return *this;
}

void Dog::makeSound(void)const {
	std::cout << "Wouf!" << std::endl;
}