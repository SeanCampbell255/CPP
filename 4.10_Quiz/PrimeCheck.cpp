#include <iostream>

bool isPrime(int x)
{
    return { x == 2 || x == 3 || x == 5 || x == 7 };
}

int main()
{
    std::cout << "Enter an int: ";
    int x {};
    std::cin >> x;

    if(isPrime(x))
        std::cout << "Shit's prime\n";
    else
        std::cout << "That shits not prime\n";

    return 0;
}
