#include <iostream>

struct Fraction
{
    int numerator {};
    int denominator {};
};

Fraction getFractionInput()
{
    Fraction temp {};
    std::cout << "Enter a numerator int: ";
    std::cin >> temp.numerator;
    std::cout << "Enter a denominator int: ";
    std::cin >> temp.denominator;
    return temp;
}

Fraction multiplyFractions(Fraction frac1, Fraction frac2)
{
    return { frac1.numerator * frac2.numerator, frac1.denominator * frac2.denominator };
}

void printFraction(Fraction f)
{
    std::cout << f.numerator << '/' << f.denominator;
}

int main()
{
    Fraction f1 { getFractionInput() };
    Fraction f2 { getFractionInput() };

    printFraction(multiplyFractions(f1, f2));
}
