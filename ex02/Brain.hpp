#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>
#include <string>

class Brain{
	public :
		Brain(void);
		Brain(Brain const & br);
		~Brain(void);

		Brain& operator=(Brain const & br);
		std::string	getIdeas(int index)const;
		void	setIdeas(std::string idea, int index);
	
	private :
		std::string _ideas[100];

};

#endif