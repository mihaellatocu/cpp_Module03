#include "ClapTrap.hpp"

ClapTrap::ClapTrap(ClapTrap& other)
{
    name = other.name; // sau this->name
    health = other.health;
    energy = other.energy;
    damage = other.damage;
}

ClapTrap::ClapTrap()
{
    this->name = "default";
    this->health = 10; //hit = life point
    this->energy = 10;
    this->damage = 0;
    std::cout << "Default Constructor called\n";
}

ClapTrap& ClapTrap::operator=(ClapTrap& other)
{
    if (this != &other)
    {
        this->name = other.name;
        this->health = other.health;
        this->energy = other.energy;
        this->damage = other.damage;
    }
    return *this;
}

ClapTrap::ClapTrap(std::string name)
{
    this->name = name;
    this->health = 10; //hit = life point
    this->energy = 10;
    this->damage = 0;
    std::cout <<B_W "Default Constructor with argument " RST <<this->name << " has been called\n";
}

ClapTrap::~ClapTrap()
{
    std::cout <<B_W "Destructor for " RST<< this->name << " called.\n";
}


void ClapTrap::attack(const std::string& target)
{
    if (this->energy > 0 && this->health > 0)
    {
        this->energy -= 1;
        std::cout << B_W "ClapTrap " RST << this->name << " attacks " << target <<", causing " << damage <<" points of damage!\n";
    }
    else
        std::cout << B_W "ClapTrap " RST << this->name << " is not able to attack.\n";
   
}
void ClapTrap::takeDamage(unsigned int amount)
{
    if (this->health >= amount)
    {
        this->health = this->health - amount;
        std::cout <<  B_W "ClapTrap " RST << this->name << " take damage " << amount << ", causing " << this->health <<" points of damage!\n";
    }
    if (this->health == 0)
        std::cout << B_W "ClapTrap " RST << this->name << " is dead\n";
        
}
        
void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->energy > 0)
    {
        this->health += amount;
        this->energy -= 1;
        std::cout << B_W "ClapTrap " RST << this->name << " repairs " << amount << ", having " << this->health <<" health points and " << this->energy << " energy left\n";
    }
    else
        std::cout << B_W "ClapTrap " RST << this->name << " doesn't have enough energy to be repaired itself\n";
}