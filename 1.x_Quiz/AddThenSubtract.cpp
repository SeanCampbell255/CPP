#include <iostream>

int main()
{
    std::cout << "Enter an integer: ";

    int num1{};
    std::cin >> num1;

    std::cout << "\nEnter another: ";

    int num2{};
    std::cin >> num2;

    std::cout << "\n"
              << num1 << " + " << num2 << " is " << num1 + num2
              << "\n\n"
              << num1 << " - " << num2 << " is " << num1 - num2
              << "\n";
}
