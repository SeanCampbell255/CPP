#include <iostream>
#include <string>

int main()
{
    std::cout << "Enter ur name bub: ";
    std::string name{};
    std::getline(std::cin >> std::ws, name);

    std::cout << "Now ur age, or else: ";
    int age{};
    std::cin >> age;

    std::cout << "Ur silly name length plus your age evals to: " << static_cast<int>(name.length()) + age << "\n";

    return 0;
}
