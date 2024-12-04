#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    this->name = "default";
    this->health = 100; //hit = life point
    this->energy = 10;
    this->damage = 0;
    std::cout << "ClapTrap default Constructor called\n";
}

ClapTrap::ClapTrap(std::string name)
{
    this->name = name;
    this->health = 100; //hit = life point
    this->energy = 10;
    this->damage = 0;
    std::cout <<B_W "ClapTrap default Constructor with argument " RST <<this->name << " has been called\n";
}

ClapTrap::ClapTrap(const ClapTrap& other)
{
    name = other.name; // sau this->name
    health = other.health;
    energy = other.energy;
    damage = other.damage;
    std::cout << "ClapTrap copy constructor called.\n";
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
    if (this != &other)
    {
        this->name = other.name;
        this->health = other.health;
        this->energy = other.energy;
        this->damage = other.damage;
    }
    std::cout << "ClapTrap copy assigned operator called.\n";
    return *this;
}

ClapTrap::~ClapTrap()
{
    std::cout <<B_W "Destructor for ClapTrap " RST<< this->name << " called.\n";
}


void ClapTrap::attack(const std::string& target)
{
    if (this->energy > 0 && this->health > 0)
    {
        this->energy -= 1;
        std::cout << B_W "ClapTrap " RST << this->name << " attacks " << target <<", having " << damage
             <<" points of damage, energy level: " << this->energy << " and health: " << this->health << std::endl;
    }
    else
        std::cout << B_W "ClapTrap " RST << this->name << " is not able to attack.\n";
   
}
void ClapTrap::takeDamage(unsigned int amount)
{
    if (this->health >= amount)
    {
        this->health = this->health - amount;
        std::cout <<  B_W "ClapTrap " RST << this->name << " take damage " << amount << ", remaining " << this->health 
        <<" points of health, energy level: " << this->energy << std::endl;
    }
    if (this->health == 0 || this->health < amount)
    {
        std::cout << B_W "ClapTrap " RST << this->name << " is dead\n";
        this->health = 0;
    }  
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