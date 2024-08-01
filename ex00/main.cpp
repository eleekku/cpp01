#include "Zombie.hpp"

int main(int argc, char **argv)
{
    Zombie *zombot;
    (void)argc;
    for (int i = 1; i < argc; i++){
        if (i % 2 == 0)
        {
        zombot = newZombie(argv[i]);
        zombot->announce();
        delete zombot;
        }
        else
            randomChump(argv[i]);
    }
}