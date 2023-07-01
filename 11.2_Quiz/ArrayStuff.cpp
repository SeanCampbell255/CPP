#include <iostream>

namespace animals
{
    enum Animals
    {
        chicken,
        dog,
        cat,
        elephant,
        duck,
        snake,
        maxAnimals,
    };
}

int main()
{
    int legs[animals::maxAnimals] {2, 4, 4, 4, 2, 0};

    std::cout << "An elephant has " << legs[animals::elephant] << " legs \n";

    return 0;
}
