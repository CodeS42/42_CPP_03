#include "../headers/ClapTrap.hpp"

int main(void)
{
    ClapTrap claptrap1("Anna");
    ClapTrap claptrap2("Lucy");

    claptrap1.attack("Lucy");
    claptrap2.takeDamage(5);
    claptrap2.attack("Anna");
    claptrap1.takeDamage(5);
    claptrap1.beRepaired(2);
    claptrap2.beRepaired(2);
    claptrap1.beRepaired(2);
    claptrap2.attack("Anna");
    claptrap1.takeDamage(5);
    claptrap1.attack("Lucy");
    claptrap2.takeDamage(5);
    claptrap2.attack("Anna");
    claptrap1.takeDamage(5);
    claptrap1.attack("Lucy");

    return (0);
}
