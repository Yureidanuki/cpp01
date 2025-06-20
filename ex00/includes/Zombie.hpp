#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <iostream>

class Zombie
{
  private:
	std::string _name;
	void setName(std::string name);

  public:
	Zombie(void);
	Zombie(std::string name);
	~Zombie(void);
	void announce(void);
};

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);

#endif