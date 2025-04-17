#include "Brain.hpp"

Brain::Brain(void){
	std::cout << "Default Brain constructor called" << std::endl;
}

Brain::Brain(Brain const & br){
	std::cout << "Copy Brain constructor called" << std::endl;
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = br._ideas[i];
}

Brain::~Brain(void){
	std::cout << "Default Brain constructor called" << std::endl;
}

std::string Brain::getIdeas(int index)const {
	if (index >=0 && index < 100)
		return (this->_ideas[index]);
	return NULL;
}

void	Brain::setIdeas(std::string idea, int index){
	if (index >= 0 && index < 100)
		this->_ideas[index] = idea;
}

Brain& Brain::operator=(Brain const & br){
	for (int i = 0; i < 100; i++)
	{
		this->_ideas[i] = br.getIdeas(i);
	}
	return *this; 
}