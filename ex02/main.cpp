#include "ScavTrap.hpp"
#include "FragTrap.hpp"
// #include "ClapTrap.hpp"

int main()
{
    ClapTrap a;
    ClapTrap b("tony");
    ScavTrap c("ana");
    ScavTrap d;
    FragTrap e;
    FragTrap f("mona");

    d = c;
    e = f;
    
    d.attack("unu");
    d.takeDamage(5);
    d.beRepaired(10);
   
    c.guardGate();
    e.takeDamage(12);
    f.highFivesGuys();

    std::cout <<BOLD_BLUE "Deconstructing\n" RST;
    return (0);
}