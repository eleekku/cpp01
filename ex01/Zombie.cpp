#include "Zombie.hpp"

    Zombie::Zombie(){
            this->name = "(null)";
    }

    Zombie::~Zombie(){
            std::cout << this->name << " destroyed" << std::endl;
    }

void    Zombie::announce(void){
    std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void    Zombie::setName(std::string name){
    this->name = name;
}
