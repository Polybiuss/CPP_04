#include "Cat.hpp"

Cat::Cat(void): Animal("Cat"){
	std::cout << "Default Cat constructor called" << std::endl;
}

Cat::Cat(Cat const & kitten){
	std::cout << "Copy Cat constructor called" << std::endl;
	*this = kitten;
}

Cat::~Cat(void){
	std::cout << "Default destrcutor called" << std::endl;
}

Cat&	Cat::operator=(Cat const & kitten){
	this->setType(kitten.getType());
	return *this;
}

void	Cat::makeSound(void)const{
	std::cout << "Meow!" << std::endl;
}