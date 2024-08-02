#include "main.hpp"

int main(int argc, char **argv){
        
    std::ifstream   fileIn;
    std::ifstream   fileOut;
    std::string     file;
    std::string     s1;
    std::string     s2;

    if (argc != 4){
        std::cerr << "Please give three parameters in the following order: a"
        << " filename and two strings, s1 and s2." << std::endl;
    }
    file = argv[1];
    fileIn.open(file.c_str());
    if (!fileIn.good()){
        std::cerr << "Eroror with input file" << std::endl;
        return (1);
    }
    s1 = argv[2];
    s2 = argv[3];

}