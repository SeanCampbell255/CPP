#include <iostream>

int doubleNumber(int x)
{
    return x * 2;
}

int getUserInt()
{
    std::cout << "Please give me your number *blushes* UwU\n";
    int input{};
    std::cin >> input;

    return input;
}

int main()
{
    std::cout << doubleNumber(getUserInt()) <<  '\n';

    return 0;
}
