#include "Ice.hpp"

Ice::Ice(void): AMateria("Ice"){
	std::cout << "Default Ice constrcutor" << std::endl;
}

Ice::Ice(Ice const & cold): AMateria("Ice"){
	(void)cold;
	std::cout << "Copy Ice constrcutor" << std::endl;
}

Ice::~Ice(void){
	std::cout << "Default Ice destructor" << std::endl;
}

Ice& Ice::operator=(Ice const & cold){
	(void)cold;
	return *this;
}

Ice* Ice::clone(void)const{
	Ice *cold = new Ice();
	return cold;
}

void Ice::use(ICharacter& target){
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}