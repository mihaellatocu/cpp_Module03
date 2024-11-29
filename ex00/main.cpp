#include "ClapTrap.hpp"

int main()
{
    ClapTrap a("miha");
    ClapTrap b("tony");
    
    a.attack("tony");
    b.takeDamage(2);//8
    a.attack("tony");
    b.takeDamage(3);//5
    b.beRepaired(1);//6

    a.attack("tony");
    b.takeDamage(2);//4
    a.attack("tony");
    b.takeDamage(3);//1
    b.beRepaired(1);//2
    b.takeDamage(2);//0
    b.attack("miha");
    a.takeDamage(4);
    b.attack("miha");
    a.takeDamage(0);

    std::cout <<BOLD_BLUE "Deconstructing\n" RST;
    return (0);
}