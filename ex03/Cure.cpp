#include "Cure.hpp"

Cure::Cure(void): AMateria("Cure"){
	std::cout << "Default Cure constrcutor called" << std::endl;
}

Cure::Cure(Cure const & heal): AMateria("Cure"){
	(void)heal;
	std::cout << "Copy Cure constrcutor called" << std::endl;
}

Cure::~Cure(void){
	std::cout << "Default Cure destructor called" << std::endl;
}

Cure& Cure::operator=(Cure const & heal){
	(void)heal;
	return *this;
}

Cure* Cure::clone(void)const {
	return new Cure();
}

void	Cure::use(ICharacter& target){
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}