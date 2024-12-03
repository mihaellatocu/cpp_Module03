#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    std::cout << "FragTrap default Constructor called\n";
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    std::cout <<B_W "FragTrap Constructor " BOLD_CYAN<< name << RST " called\n";
}

FragTrap::~FragTrap()
{
    std::cout << "Destructor for FragTrap " BOLD_CYAN<< name <<RST " called.\n";
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "High five guys!\n"; 
}