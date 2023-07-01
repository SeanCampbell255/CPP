#include <iostream>

int main()
{
    char letter{'a'};

    while(letter <= 'z')
    {
        std::cout << letter << " in ASCII: " << static_cast<int>(letter++) << '\n';
    }

    return 0;
}
