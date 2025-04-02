#include "WrongCat.hpp"

WrongCat::WrongCat(void): WrongAnimal("WrongCat"){
	std::cout << "Default WrongCat constructor called" << std::endl;
}

WrongCat::WrongCat(WrongCat const & wc){
	std::cout << "Copy WrongCat constructor called" << std::endl;
	*this = wc;
}

WrongCat::~WrongCat(void){
	std::cout << "Default WrongCat destrcutor called" << std::endl;
}

WrongCat& WrongCat::operator=(WrongCat const & wc){
	this->setType(wc.getType());
	return *this;
}

void	WrongCat::makeSound(void)const{
	std::cout << "Wrong Meow!" << std::endl;
}