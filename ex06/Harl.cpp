#include "Harl.hpp"

    Harl::Harl(){

    }

    Harl::~Harl(){

    }

    void Harl::debug(){
        std::cout << "I love having extra bacon for my ";
        std::cout << "7XL-double-cheese-triple-pickle-specialketchup burger. I really do!";
        std::cout << std::endl;  
    }

    void Harl::info(){
        std::cout << "I cannot believe adding extra bacon costs more money. ";
        std::cout << "You didn’t put enough bacon in my burger! ";
        std::cout << "If you did, I wouldn’t be asking for more!" << std::endl;
    }

    void Harl::warning(){
        std::cout << "I think I deserve to have some extra bacon for free. ";
        std::cout << "I’ve been coming for years whereas you started working here since last month.";
        std::cout << std::endl;
    }

    void Harl::error(){
        std::cout << "This is unacceptable! I want to speak to the manager now.";
        std::cout << std::endl;
    }

    void    Harl::complain(std::string level){
        std::map<std::string, Harl::HarlMemFn> levels = {
        {"DEBUG", &Harl::debug},
        {"INFO", &Harl::info},
        {"WARNING", &Harl::warning},
        {"ERROR", &Harl::error}
        };
        std::map<std::string, Harl::HarlMemFn>::iterator it = levels.find(level);
        while (it != levels.end()){
            (this->*(it->second))();
            return ;
        }
    }