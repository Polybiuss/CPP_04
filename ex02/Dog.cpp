#include "Dog.hpp"

Dog::Dog(void): Animal("Dog"){
	_brain = new Brain();
	std::cout << "Default dog constructor called" << std::endl;
}

Dog::Dog(Dog const & goodBoy){
	std::cout << "Copy Dog constrcutor called" << std::endl;
	this->_brain = new Brain(*goodBoy._brain);
}

Dog::~Dog(void){
	delete _brain;
	std::cout << "Default Dog constructor called" << std::endl;
}

Dog& Dog::operator=(Dog const & goodBoy){
	for (int i = 0; i < 100; i++)
		this->_brain[i] = goodBoy._brain[i];
	return *this;
}

void Dog::makeSound(void)const {
	std::cout << "Wouf!" << std::endl;
}