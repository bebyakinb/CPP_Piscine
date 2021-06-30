#ifndef D04_OLDPEON_HPP
# define D04_OLDPEON_HPP
# include "Victim.hpp"

class OldPeon : public Victim
{
public:
	OldPeon();
	OldPeon(std::string const &);
	OldPeon(OldPeon const &);
	OldPeon &operator=(const OldPeon&);
	virtual ~OldPeon();
	virtual void getPolymorphed() const;
};


#endif //D04_OLDPEON_HPP
