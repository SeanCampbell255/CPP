#include <iostream>

int main()
{
    std::cout << "Enter an int: ";
    int small{};
    std::cin >> small;

    std::cout << "Enter a bigger one: ";
    int large{};
    std::cin >> large;

    if(small > large)
    {
        std::cout << "Swap\n";
        int temp{large};
        large = small;
        small = temp;
    }

    std::cout << "The smaller value is  " << small << '\n';
    std::cout << "The larger is " << large << '\n';

    return 0;
}
