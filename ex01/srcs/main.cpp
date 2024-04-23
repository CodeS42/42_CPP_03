#include "../headers/ScavTrap.hpp"

int main(void)
{
    ScavTrap scavtrap1("Anna");
    ScavTrap scavtrap2("Lucy");

    scavtrap1.attack("Lucy");
    scavtrap2.takeDamage(20);
    scavtrap2.attack("Anna");
    scavtrap1.takeDamage(20);
    scavtrap2.beRepaired(5);
    scavtrap2.attack("Anna");
    scavtrap1.takeDamage(20);
    scavtrap1.attack("Lucy");
    scavtrap2.takeDamage(20);
    scavtrap2.attack("Anna");
    scavtrap1.takeDamage(20);
    scavtrap2.attack("Anna");
    scavtrap1.takeDamage(20);
    scavtrap2.attack("Anna");
    scavtrap1.takeDamage(20);
    scavtrap2.attack("Anna");
    scavtrap1.takeDamage(20);

    return (0);
}
