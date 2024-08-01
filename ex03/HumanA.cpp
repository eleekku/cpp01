#include "HumanA.hpp"
#include "Weapon.hpp"

HumanA::HumanA(std::string humanname, Weapon &humanweapon) : name(humanname), weapon(humanweapon){
    std::cout << "HumanA " << name << " created with ";
	std::cout << humanweapon.getType() << std::endl;
}

HumanA::~HumanA(){

}

void    HumanA::attack(){
        std::cout << this->name << " attacks with their " << weapon.getType() << std::endl;
}


