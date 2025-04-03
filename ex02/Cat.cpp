#include "Cat.hpp"

Cat::Cat(void): Animal("Cat"){
	_brain = new Brain();
	std::cout << "Default Cat constructor called" << std::endl;
}

Cat::Cat(Cat const & kitten){
	std::cout << "Copy Cat constructor called" << std::endl;
	*this = kitten;
	this->_brain = new Brain(*kitten._brain);
}

Cat::~Cat(void){
	delete _brain;
	std::cout << "Default Cat destructor called" << std::endl;
}

Cat&	Cat::operator=(Cat const & kitten){
	this->setType(kitten.getType());
	return *this;
}

void	Cat::makeSound(void)const{
	std::cout << "Meow!" << std::endl;
}