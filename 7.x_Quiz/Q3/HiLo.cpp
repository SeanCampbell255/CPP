#include <iostream>
#include <random>

int getUserInput(int count)
{
    while (true)
    {
        std::cout << "Shitty guess #" << count << ": ";

        int guess{};
        std::cin >> guess;

        if (std::cin.fail())
        {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            continue;
        }

        if (guess < 1 || guess > 100)
        {
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            continue;
        }

        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        return guess;
    }
}

bool checkHiLo(int guess, int num)
{
    if( guess > num )
    {
        std::cout << "Too high\n";
        return false;
    }
    else if ( guess < num )
    {
        std::cout << "Too low\n";
        return false;
    }
    else
    {
        std::cout <<  "Lucky ducky\n";
        return true;
    }
}


bool playGame(int guesses, int num)
{
    for( int i = 1; i <= guesses; ++i)
    {
        int currentGuess { getUserInput(i) };

        if(checkHiLo(currentGuess, num))
            return true;
    }
    return false;
}

bool playAgain()
{
    while (true)
    {
        std::cout << "Try better this time (y/n)? ";
        char ch {};
        std::cin >> ch;

        switch (ch)
        {
            case 'y': return true;
            case 'n': return false;
        }
    }
}

int main()
{
    //RNG setup, Mersenne Twister 1-100
    std::random_device rd;
    std::seed_seq seq{ rd(), rd(), rd(), rd(), rd(), rd(), rd(), rd() };
    std::mt19937 mt{ seq };
    std::uniform_int_distribution<int> num100{ 1, 100 };

    constexpr int guesses { 7 };

    do
    {
        int  number{ num100(mt) };
        std::cout << "It's time for play gaem my love, pick number between 1 and 100. You will fail in 7 try.\n";
        bool winner {playGame(guesses, number)};

        if(winner)
            std::cout << "You are Winrar\n";
        else
            std::cout << "How do you lose ez game? Number was " << number << '\n';

    } while(playAgain());

    std::cout << "What did you hope to achieve?\n";

    return 0;
}
