#ifndef D04_MATERIASOURCE_HPP
# define D04_MATERIASOURCE_HPP
# define M_SLOTS 4
# include "IMateriaSource.hpp"
# include "AMateria.hpp"

class MateriaSource : public IMateriaSource
{
private:
	AMateria*	_materiaSlots[M_SLOTS];
public:
	MateriaSource();
	virtual ~MateriaSource();
	MateriaSource(const MateriaSource &);
	MateriaSource 		&operator=(const MateriaSource&);

	void 	init_slots();
	virtual void learnMateria(AMateria*);
	virtual AMateria* createMateria(std::string const & type);
};


#endif //D04_MATERIASOURCE_HPP
