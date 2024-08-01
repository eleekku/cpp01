#include "HumanB.hpp" 

HumanB::HumanB(std::string name) : _name(name), weapon(NULL){
    std::cout << "HumanB " << name << " created with no weapon" << std::endl;
}

HumanB::~HumanB(){

}

void    HumanB::attack(){
        std::cout << this->_name << " attacks with their " << weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &weapon){
        this->weapon = &weapon;
}
    