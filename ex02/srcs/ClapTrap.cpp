#include "../headers/ClapTrap.hpp"

ClapTrap::ClapTrap() : name("Johnny"), hit_p(10), energy_p(10), attack_d(0)
{
    std::cout << "ClapTrap default constructor called." << std::endl;
}

ClapTrap::ClapTrap(std::string name) : hit_p(10), energy_p(10), attack_d(0)
{
    std::cout << "ClapTrap constructor called." << std::endl;
    this->name = name;
}

ClapTrap::ClapTrap(const ClapTrap& obj)
{
    std::cout << "ClapTrap copy constructor called." << std::endl;
    *this = obj;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
    std::cout << "ClapTrap assignment operator called." << std::endl;
    if (this != &other)
    {
        name = other.name;
        hit_p = other.hit_p;
        energy_p = other.energy_p;
        attack_d = other.attack_d;
    }
    return (*this);
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap " << name << " has been destroyed." << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
    if (!is_dead() && !no_energy())
    {
        energy_p--;
        std::cout << "ClapTrap " << name << " attacks " << target << ", causing " << attack_d << " points of damage!" << std::endl;
    }
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (!is_dead())
    {
        hit_p -= amount;
        std::cout << "ClapTrap " << name << " has lost " << amount << " hit points." << std::endl;
    }
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (!is_dead() && !no_energy())
    {
        hit_p += amount;
        energy_p--;
        std::cout << "ClapTrap " << name << " has gained " << amount << " hit points." << std::endl;
    }
}

bool ClapTrap::no_energy(void) const
{
    if (energy_p <= 0)
    {
        std::cout << "ClapTrap " << name << " has no energy points left." << std::endl;
        return (true);
    }
    return (false);
}

bool ClapTrap::is_dead(void) const
{
    if (hit_p <= 0)
    {
        std::cout << "ClapTrap " << name << " is dead." << std::endl;
        return (true);
    }
    return (false);
}

