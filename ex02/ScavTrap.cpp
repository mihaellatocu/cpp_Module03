#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    std::cout << "ScavTrap default Constructor called\n";
} 

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    //ClapTrap::name = name; // used only if overwride
    // ClapTrap::health = 30;
    // ClapTrap::energy = 25;
    // ClapTrap::damage = 15;
    std::cout <<B_W "ScavTrap Constructor " BOLD_BLUE<< name << RST " called\n";
}

ScavTrap::~ScavTrap()
{
    std::cout << "Destructor for ScavTrap " BOLD_BLUE<< name <<RST " called.\n";
}

void ScavTrap::guardGate()
{
    std::cout <<B_W "ScavTrap " BOLD_BLUE << name <<RST " is now in Gatekeeper mode.\n";
}