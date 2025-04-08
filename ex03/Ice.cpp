#include "Ice.hpp"

Ice::Ice(void): AMateria("Ice"){
	std::cout << "Default Ice constrcutor" << std::endl;
}

Ice::Ice(Ice const & cold){
	std::cout << "Copy Ice constrcutor" << std::endl;
	*this = cold;
}

Ice::~Ice(void){
	std::cout << "Default Ice destructor" << std::endl;
}

Ice& Ice::operator=(Ice const & cold){
	this->setType(cold.getType());
	return *this;
}

Ice* Ice::clone(void)const{
	Ice *cold = new Ice();
	return cold;
}

// void Ice::use(ICharacter& target){
// 	std::cout <<
// }