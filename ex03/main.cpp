#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"
#include "ClapTrap.hpp"

int main()
{
   // ClapTrap a("aron");
    DiamondTrap b("toto");
    b.whoAmI();
    
    b.attack("sara");
    b.takeDamage(5);
    b.beRepaired(10);
   
    // b.guardGate();
    // b.takeDamage(120);
    // b.takeDamage(12);
    // b.highFivesGuys();

    std::cout <<BOLD_BLUE "Deconstructing\n" RST;
    return (0);
}