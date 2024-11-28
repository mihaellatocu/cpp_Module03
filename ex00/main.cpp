#include "ClapTrap.hpp"


int main()
{
    ClapTrap a("miha");
    ClapTrap b("tony");
   // b = a;
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
    // std::cout << "a damage " << a.damage << "\n";
    // std::cout << "b damage " << b.damage << "\n";
    std::cout << "deconstructing\n";
    return (0);
}