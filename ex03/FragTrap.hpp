#include "ClapTrap.hpp"
#pragma once

class FragTrap: virtual public ClapTrap
{
private:
    /* data */
public:
    FragTrap();
    FragTrap(std::string name);
    FragTrap(const FragTrap& other);
    FragTrap& operator=(const FragTrap& other);
    ~FragTrap();

    void highFivesGuys(void);
};

