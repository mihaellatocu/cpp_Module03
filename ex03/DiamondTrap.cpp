#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap("Default_clap_name"), ScavTrap(), FragTrap(), name("Default")
{
    health = FragTrap::health;
    //energy = ScavTrap::energy;
    energy = 50;
    damage = FragTrap::damage;
    std::cout <<B_W "DiamondTrap default Constructor called for " BOLD_MAGENTA << name << "\n" RST;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), ScavTrap(), FragTrap(), name(name)
{
    // this->name = ClapTrap::name + "_clap_name";
    // this->name = name ;
    health = FragTrap::health;
    //energy = ScavTrap::energy;
    this->energy = 50;
    this->damage = FragTrap::damage;
    std::cout <<B_W "DiamondTrap Constructor " BOLD_MAGENTA<< name << RST " called\n";
}

DiamondTrap::DiamondTrap(const DiamondTrap& other) : ClapTrap(other), ScavTrap(other), FragTrap(other),  name(other.name)
{
    // this->name = other.name;
    // this->health = other.health;
    // this->energy = other.energy;
    // this->damage = other.damage;
    std::cout << "DiamondTrap copy constructor called.\n";
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& other)
{
    if (this != &other)
    {
        this->name = other.name;
        this->health = other.health;
        this->energy = other.energy;
        this->damage = other.damage;
    }
    std::cout <<BOLD_MAGENTA "DiamondTrap copy assigned operator called.\n" RST;
    return (*this);
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "Destructor for DiamondTrap " BOLD_MAGENTA << name <<RST " called.\n";
}

void DiamondTrap::whoAmI()
{
    std::cout << "I am " BOLD_MAGENTA << name << RST " and my ClapTrap name is " B_W << ClapTrap::name << RST << std::endl;
}

void DiamondTrap::attack(const std::string& target)
{
    ScavTrap::attack(target);
}