#ifndef CURE_HPP
# define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria{
	public :
		Cure(void);
		Cure(Cure const & heal);
		~Cure(void);

		Cure& operator=(Cure const & heal);
		Cure* clone(void)const;
		// void	use(Icharacter& target);
};

#endif