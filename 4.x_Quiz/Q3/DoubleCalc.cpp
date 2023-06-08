#include <iostream>

double getDoubleInput()
{
    std::cout << "Enter a double value: ";
    double d{};
    std::cin >> d;
    return d;
}

char getOperatorInput()
{
    std::cout << "Enter one of the following: +, -, *, or / : ";
    char c{};
    std::cin >> c;
    return c;
}

void printResult(double d1, char op, double d2)
{
    switch(op)
    {
        case '+':
            std::cout << d1 << " + " << d2 << " is " << d1 + d2 << "\n";
            break;
        case '-':
            std::cout << d1 << " - " << d2 << " is " << d1 - d2 << "\n";
            break;
        case '*':
            std::cout << d1 << " * " << d2 << " is " << d1 * d2 << "\n";
            break;
        case '/':
            std::cout << d1 << " / " << d2 << " is " << d1 / d2 << "\n";
            break;
    }
}

int main()
{
    double d1{getDoubleInput()};
    double d2{getDoubleInput()};
    char c{getOperatorInput()};

    printResult(d1, c, d2);

    return 0;
}
