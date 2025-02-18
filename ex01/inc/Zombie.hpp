#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>

#define BOLD "\033[1m"
#define RESET "\033[0m"
#define BLACK "\033[30m"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define BLUE "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN "\033[36m"
#define WHITE "\033[37m"

class Zombie 
{
    public :
    Zombie();
    Zombie(std::string name);
    ~Zombie();
    void announce() const;

    private :
    std::string name;
};

Zombie* zombieHorde(int N, std::string name);

#endif