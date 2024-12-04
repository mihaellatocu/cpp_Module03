#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
    //this->name = "Scav_Default";
    this->name = ClapTrap::name;
    this->health = ClapTrap::health;
    this->energy = 50;
    this->damage = 20;
    std::cout << "ScavTrap default Constructor called\n";
} 

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    this->name = name; 
    this->health = ClapTrap::health;
    this->energy = 50;
    this->damage = 20;
    std::cout <<B_W "ScavTrap Constructor " BOLD_BLUE<< name << RST " called\n";
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other)
{
    this->name = other.name;
    this->health = other.health;
    this->energy = other.energy;
    this->damage = other.damage;
    std::cout << "ScavTrap Copy constructor called" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other)
{
    if (this != &other)
    {
        name = other.name;
        health = other.health;
        energy = other.energy;
        damage = other.damage;
    }
    std::cout << "ScavTrap Copy assign constructor called" << std::endl;
    return (*this);
}

ScavTrap::~ScavTrap()
{
    std::cout << "Destructor for ScavTrap " BOLD_BLUE<< name <<RST " called.\n";
}

void ScavTrap::guardGate()
{
    std::cout <<B_W "ScavTrap " BOLD_BLUE << name <<RST " is now in Gatekeeper mode.\n";
}

void ScavTrap::attack(const std::string& target) 
{
     if (this->energy > 0 && this->health > 0)
    {
        this->energy -= 1;
        std::cout << B_W "ScavpTrap " RST << this->name << " attacks " << target <<", having " << damage
             <<" points of damage, energy level: " << this->energy << " and health: " << this->health << std::endl;
    }
    else
        std::cout << B_W "ScavTrap " RST << this->name << " is not able to attack.\n";
}