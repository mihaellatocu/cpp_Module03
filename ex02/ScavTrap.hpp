#include "ClapTrap.hpp"
#pragma once

class ScavTrap: public ClapTrap
{
private:
    
public:
    ScavTrap();
    ScavTrap(std::string name);
    ScavTrap(const ScavTrap& other);
    ScavTrap& operator=(const ScavTrap& other);
    ~ScavTrap();

    void guardGate();
};
