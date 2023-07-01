#include <iostream>
#include <string_view>

enum class Animal
{
    pig,
    chicken,
    goat,
    cat,
    dog,
    duck,
};

constexpr std::string_view getAnimalName(Animal animal)
{
    switch (animal)
    {
        case Animal::pig: return "pig";
        case Animal::chicken: return "chicken";
        case Animal::goat: return "goat";
        case Animal::cat: return "cat";
        case Animal::dog: return "dog";
        case Animal::duck: return "duck";
        default: return "huh?";
    }
}

constexpr std::string_view getNumberOfLegs(Animal animal)
{
    switch (animal)
    {
        case Animal::pig: return "4";
        case Animal::chicken: return "2";
        case Animal::goat: return "4";
        case Animal::cat: return "4";
        case Animal::dog: return "4";
        case Animal::duck: return "2";
        default: return "huh?";
    }
}

int main()
{
    Animal chicken{ Animal::chicken };
    Animal cat{ Animal::cat };

    std::cout  << "A " << getAnimalName(cat) << " has " << getNumberOfLegs(cat) << " legs.";
    std::cout  << "A " << getAnimalName(chicken) << " has " << getNumberOfLegs(chicken) << " legs.";
}
