#include <iostream>

int main()
{
    std::cout << "Enter an integer: ";

    int num{};
    std::cin >> num;

    std::cout << "\nDouble that number for: " << num * 2 << "\n"
              << "Triple it for: " << num * 3 << "\n";
}
