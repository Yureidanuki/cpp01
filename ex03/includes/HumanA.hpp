#ifndef HUMANA_H
# define HUMANA_H

# include "Weapon.hpp"
# include <iostream>
# include <string>

class HumanA
{
  private:
    std::string _name;
    Weapon& _weapon;

  public:
    HumanA(const std::string& name, Weapon& weapon);
    ~HumanA();

    void attack() const;
};

#endif

