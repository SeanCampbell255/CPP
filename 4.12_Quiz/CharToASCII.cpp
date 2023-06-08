#include <iostream>

int main()
{
    std::cout << "Gimme char: ";
    char c{};
    std::cin >> c;
    int cInt{c};

    std::cout << "Gave \'" << c << "\' with ASCII code " << cInt << "\n";

    return 0;
}
