#include "io.h"
#include <iostream>

int readNumber()
{
    std::cout << "Gimme int\n";

    int x;
    std::cin >> x;
    return x;
}

void writeAnswer(int answer)
{
    std::cout << "Answer: " << answer << "\n";
}
