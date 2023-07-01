#include <iostream>

void fizzbuzz(int num)
{
    for(int i{1}; i <= num; i++)
    {
        bool divisible{false};

        if(i % 3 == 0)
        {
            std::cout << "fizz";
            divisible = true;
        }
        if(i % 5 == 0)
        {
            std::cout << "buzz";
            divisible = true;
        }
        if(i % 7 == 0)
        {
            std::cout << "pop";
            divisible = true;
        }
        if(!divisible)
        {
            std::cout << i;
        }
        std::cout << '\n';
    }
}

int main()
{
    fizzbuzz(106);

    return 0;
}
