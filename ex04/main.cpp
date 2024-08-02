#include <filesystem>
#include <iostream>
#include <fstream>

int error_return(std::string message){
    std::cout << message << std::endl;
    return (1);
}

void    replace(std::string buffer, std::string s1, std::string s2, std::ofstream &outfile){
        size_t  position;

        position = buffer.find(s1);
        if (position == std::string::npos){
            outfile << buffer;
            return;
        }
        else{
            outfile << buffer.substr(0, position);
            outfile << s2;
            position = position + s1.length();
            outfile << buffer.substr(position, buffer.length() - position);
            outfile << "\n";
        }
}

int main(int argc, char **argv){
        
    std::ifstream   fileIn;
    std::ofstream   fileOut;
    std::string     file;
    std::string     s1;
    std::string     s2;
    std::string     buffer;

    if (argc != 4)
        return (error_return("Please give only three arguments file, s1, s2"));
    file = argv[1];
    fileIn.open(file.c_str());
    if (!fileIn.good())
       return (error_return("Error with input fille"));
    s1 = argv[2];
    s2 = argv[3];
    file = file + ".replace";
    if (std::filesystem::exists(file)){
        fileIn.close();
        return (error_return("Error outputfile already exists")); 
    }
    fileOut.open(file.c_str());
    if (!fileOut.good()){
        fileIn.close();
        return (error_return("Error with outfile"));
    }
    while (getline(fileIn, buffer))
        replace(buffer, s1, s2, fileOut);
    fileIn.close();
    fileOut.close();

    return (0);
}