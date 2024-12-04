#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
    //this->name = "Frag_Default";
    this->health = ClapTrap::health;
    this->energy = 100;
    this->damage = 30;
    std::cout << "FragTrap default Constructor called\n";
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    this->name = name;
    this->health = ClapTrap::health;
    this->energy = 80;
    this->damage = 30;
    std::cout <<B_W "FragTrap Constructor " BOLD_CYAN<< name << RST " called\n";
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other)
{
    this->name = other.name;
    this->health = other.health;
    this->energy = other.energy;
    this->damage = other.damage;
    std::cout << "FragTrap copy constructor called.\n";
}

FragTrap& FragTrap::operator=(const FragTrap& other)
{
    if (this != &other)
    {
        this->name = other.name;
        this->health = other.health;
        this->energy = other.energy;
        this->damage = other.damage;
    }
    std::cout << "FragTrap copy assign operator called.\n";
    return (*this);
}

FragTrap::~FragTrap()
{
    std::cout << "Destructor for FragTrap " BOLD_CYAN<< name <<RST " called.\n";
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap - High five guys!\n"; 
}