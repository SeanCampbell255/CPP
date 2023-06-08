#include <iostream>

//THIS DID NOT NEED TO BE RECURSIVE, GOT BORED
void ballDrop(double height, int second) //second is the unit of time (we're on the 'second'th second)
{
    constexpr double grav{ 9.8 };
    double currentHeight{ height - (grav * second * second / 2) };

    if(currentHeight > 0)
    {
        std::cout << "At " << second << " seconds, the ball is at height: " << currentHeight << " meters\n";
        ballDrop(height, ++second);
    }
}

int main()
{
    std::cout << "Enter the height of the tower in meters: ";
    int height{};
    std::cin >> height;

    ballDrop(height, 0);

    return 0;
}
