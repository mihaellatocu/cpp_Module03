#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    std::cout << "ScavTrap default Constructor called\n";
} 

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    //ClapTrap::name = name;
    // ClapTrap::health = 30;
    // ClapTrap::energy = 25;
    // ClapTrap::damage = 15;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap destructor called.\n";
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap is now in Gatekeeper mode.\n";
}