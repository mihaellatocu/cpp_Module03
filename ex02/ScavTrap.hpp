#include "ClapTrap.hpp"
#pragma once

class ScavTrap: public ClapTrap
{
private:
    
public:
    ScavTrap();
    ScavTrap(std::string name);
    ~ScavTrap();

    void guardGate();
};
