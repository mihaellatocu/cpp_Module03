#include "ScavTrap.hpp"
// #include "ClapTrap.hpp"

int main()
{
    ClapTrap a;
    ClapTrap b("tony");
    ScavTrap c("ana");
    ScavTrap d;
    d = c;
    
    d.attack("unu");
    d.takeDamage(5);
    d.beRepaired(10);
    a.attack("tony");
    b.takeDamage(20);
    c.takeDamage(2);
    c.attack("tony");
    c.takeDamage(3);
    c.beRepaired(1);

    c.guardGate();

    std::cout <<BOLD_BLUE "Deconstructing\n" RST;
    return (0);
}