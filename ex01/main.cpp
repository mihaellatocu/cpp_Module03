#include "ScavTrap.hpp"
// #include "ClapTrap.hpp"

int main()
{
    ClapTrap a;
    ClapTrap b("tony");
    ScavTrap c("ana");
    
    a.attack("tony");
     b.takeDamage(2);
    c.takeDamage(2);
    c.attack("tony");
    c.takeDamage(3);
    c.beRepaired(1);

    c.guardGate();

    std::cout <<BOLD_BLUE "Deconstructing\n" RST;
    return (0);
}