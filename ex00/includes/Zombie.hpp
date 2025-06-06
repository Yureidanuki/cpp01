#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <iostream>

class Zombie
{
  private:
	std::string _name;

  public:
    Zombie(void);
    Zombie(std::string name);
    ~Zombie(void);
    void setName(std::string name);
	void announce(void);
};

Zombie* newZombie(std::string name);
void randomChump(std::string name);

#endif