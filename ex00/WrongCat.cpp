#include "WrongCat.hpp"

WrongCat::WrongCat(void): WrongAnimal("WrongCat"){
	std::cout << "Default WrongCat constructor called" << std::endl;
}

WrongCat::WrongCat(WrongCat const & wc){
	std::cout << "Copy WrongCat constructor called" << std::endl;
	this->p_type = wc.p_type;
}

WrongCat::~WrongCat(void){
	std::cout << "Default WrongCat destrcutor called" << std::endl;
}

WrongCat& WrongCat::operator=(WrongCat const & wc){
	this->p_type = wc.p_type;
	return *this;
}

void	WrongCat::makeSound(void)const{
	std::cout << "Wrong Meow!" << std::endl;
}