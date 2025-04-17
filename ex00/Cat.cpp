#include "Cat.hpp"

Cat::Cat(void): Animal("Cat"){
	std::cout << "Default Cat constructor called" << std::endl;
}

Cat::Cat(Cat const & kitten){
	std::cout << "Copy Cat constructor called" << std::endl;
	this->p_Type = kitten.p_Type;
}

Cat::~Cat(void){
	std::cout << "Default destrcutor called" << std::endl;
}

Cat&	Cat::operator=(Cat const & kitten){
	this->p_Type = kitten.p_Type;
	return *this;
}

void	Cat::makeSound(void)const{
	std::cout << "Meow!" << std::endl;
}