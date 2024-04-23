#include "../headers/FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
    std::cout << "FragTrap default constructor called" << std::endl;
    name = "Johnny";
    hit_p = 100;
    energy_p = 100;
    attack_d = 30;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    std::cout << "FragTrap constructor called" << std::endl;
    this->name = name;
    hit_p = 100;
    energy_p = 100;
    attack_d = 30;
}

FragTrap::FragTrap(const FragTrap& obj) : ClapTrap(obj)
{
    std::cout << "FragTrap copy constructor called" << std::endl;
    *this = obj;
}

FragTrap& FragTrap::operator=(const FragTrap& other)
{
    std::cout << "FragTrap assignment operator called." << std::endl;
    if (this != &other)
    {
        name = other.name;
        hit_p = other.hit_p;
        energy_p = other.energy_p;
        attack_d = other.attack_d;
    }
    return (*this);
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap " << name << " has been destroyed." << std::endl;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << name << " wants a high five !" << std::endl;
}
