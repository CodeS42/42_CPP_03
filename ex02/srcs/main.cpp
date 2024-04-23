#include "../headers/FragTrap.hpp"

int main(void)
{
    FragTrap fargtrap1("Anna");
    FragTrap fargtrap2("Lucy");

    fargtrap1.attack("Lucy");
    fargtrap2.takeDamage(30);
    fargtrap2.attack("Anna");
    fargtrap1.takeDamage(30);
    fargtrap2.beRepaired(5);
    fargtrap2.attack("Anna");
    fargtrap1.takeDamage(30);
    fargtrap1.attack("Lucy");
    fargtrap2.takeDamage(30);
    fargtrap2.attack("Anna");
    fargtrap1.takeDamage(30);
    fargtrap2.attack("Anna");
    fargtrap1.takeDamage(30);
    fargtrap2.attack("Anna");
    fargtrap1.takeDamage(30);

    return (0);
}
