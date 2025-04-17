#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void){
	for (int i = 0; i < 4; i++)
	_content[i] = NULL;
	std::cout << "Default MateriaSoucre constructor called" << std::endl;	
}

MateriaSource::MateriaSource(MateriaSource const & ims){
	for (int i = 0; i < 4; i++)
	{
		if (!ims._content[i])
			this->_content[i] = NULL;
		else
			this->_content[i] = ims._content[i]->clone();
	}
	std::cout << "Copy MateriaSource constructor called" << std::endl;
}

MateriaSource::~MateriaSource(void){
	for (int i = 0; i < 4; i++)
		if (this->_content[i])
			delete this->_content[i];
	std::cout << "Default MateriaSource destructor called" << std::endl;
}

void MateriaSource::learnMateria(AMateria* am){
	for (int i = 0; i < 4; i++)
	{
		if (!this->_content[i]){
			this->_content[i] = am;
			break;
		}
	}
}

AMateria* MateriaSource::createMateria(std::string const & type){
	for (int i = 0; i < 4; i++)
	{
		if (this->_content[i])
		{
			if (this->_content[i]->getType() == type)
				return this->_content[i]->clone();
		}
	}
	return 0;
}

MateriaSource& MateriaSource::operator=(MateriaSource const & ims){
	for (int i = 0; i < 4; i++)
	{
		if (this->_content[i])
			delete this->_content[i];
	}
	for (int i = 0; i < 4; i++)
	{
		if (ims._content[i])
			this->_content[i] = ims._content[i]->clone();
		else
			this->_content[i] = NULL;
	}
	return *this;
}