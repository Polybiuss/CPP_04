#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource{
	public :
		MateriaSource(void);
		MateriaSource(MateriaSource const & ims);
		~MateriaSource(void);

		void learnMateria(AMateria* am);
		AMateria* createMateria(std::string const & type);
		MateriaSource& operator=(MateriaSource const & ims);
	
	private :
		AMateria* _content[4];
};

#endif