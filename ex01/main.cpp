#include "Zombie.hpp"

int main(void)
{
    int             number_of_zombies;
    std::string     name;
    Zombie          *horde;

    number_of_zombies = 20;
    name = "elias";

    if (number_of_zombies < 1){
        std::cout << "Please enter at least 1 Zombie" << std::endl;
        return (0);
    }

    horde = zombieHorde(number_of_zombies, name);
    delete[] horde;


}