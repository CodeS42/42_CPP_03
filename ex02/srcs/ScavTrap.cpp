#include "../headers/ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
    std::cout << "ScavTrap default constructor called" << std::endl;
    name = "Johnny";
    hit_p = 100;
    energy_p = 50;
    attack_d = 20;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    std::cout << "ScavTrap constructor called" << std::endl;
    this->name = name;
    hit_p = 100;
    energy_p = 50;
    attack_d = 20;
}

ScavTrap::ScavTrap(const ScavTrap& obj) : ClapTrap(obj)
{
    std::cout << "ScavTrap copy constructor called" << std::endl;
    *this = obj;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other)
{
    std::cout << "ScavTrap assignment operator called." << std::endl;
    if (this != &other)
    {
        name = other.name;
        hit_p = other.hit_p;
        energy_p = other.energy_p;
        attack_d = other.attack_d;
    }
    return (*this);
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap " << name << " has been destroyed." << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
    if (!is_dead() && !no_energy())
    {
        energy_p--;
        std::cout << "ScavTrap " << name << " attacks " << target << ", causing " << attack_d << " points of damage!" << std::endl;        
    }
}

void ScavTrap::guardGate(void)
{
    std::cout << "ScavTrap " << name << " is in Gate keeper mode." << std::endl;
}
