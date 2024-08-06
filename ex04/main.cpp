#include <filesystem>
#include <iostream>
#include <fstream>
#include <sstream>

int error_return(std::string message){
    std::cout << message << std::endl;
    return (1);
}

void    replace(std::string buffer, std::string s1, std::string s2, std::ofstream &outfile){
        size_t  position;

        while (1){
        position = buffer.find(s1);
        if (s1.empty() || position == std::string::npos){
            outfile << buffer;
            break ;
        }
        else{
            std::cerr << "im here" << std::endl;
            std::string cpy = buffer; 
            cpy.insert(position, s2);
            cpy = cpy.substr(0, position + s2.length());
            outfile << cpy;
            buffer = buffer.erase(0, position + s1.length());
        }
        }
}

int main(int argc, char **argv){
    std::string     s1;
    std::string     s2;
    std::stringstream     buffer;
	
    if (argc != 4)
        return (error_return("Please give only three arguments file, s1, s2"));
    std::ifstream fileIn(argv[1]);
    if (!fileIn.is_open())
       return (error_return("Error with input fille"));
    s1 = argv[2];
    s2 = argv[3];
    std::string outfile = (std::string)argv[1] + ".replace";
    std::ofstream fileOut(outfile);
    if (!fileOut.is_open())
        return (error_return("Error with outfile"));
    buffer << fileIn.rdbuf();
    std::string content = buffer.str();
        replace(content, s1, s2, fileOut);

    return (0);
}
