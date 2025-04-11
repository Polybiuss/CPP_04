#include "Cure.hpp"

Cure::Cure(void): AMateria("Cure"){
	std::cout << "Default Cure constrcutor called" << std::endl;
}

Cure::Cure(Cure const & heal){
	std::cout << "Copy Cure constrcutor called" << std::endl;
	*this = heal;
}

Cure::~Cure(void){
	std::cout << "Default Cure destructor called" << std::endl;
}

Cure& Cure::operator=(Cure const & heal){
	this->setType(heal.getType());
	return *this;
}

Cure* Cure::clone(void)const {
	return new Cure();
}

void	Cure::use(ICharacter& target){
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}