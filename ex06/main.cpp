#include "Harl.hpp"


int getLevel(std::string level){
	    const std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	    int					levelNumber = 4;

	    for (int i = 0; i < 4 && levelNumber == 4; i++)
	    {
		    if (level == levels[i])
			    levelNumber = i;
	    }
	    return (levelNumber);
    }

int	main(int argc, char **argv)
{
	Harl	Karen;
	int		lvl;

	if (argc != 2){
        std::cout << "Invalid number of argumments" << std::endl;
        return (1);
    }
	lvl = getLevel(argv[1]);
	switch(lvl)
	{
		case 0 :
			Karen.complain("DEBUG");
		case 1 :
			Karen.complain("INFO");
		case 2 :
			Karen.complain("WARNING");
		case 3 :
			Karen.complain("ERROR");
			break ;
		default :
			std::cout << "[ Probably complaining about insignificant problem. ]" << std::endl;
	}
	return (0);
}