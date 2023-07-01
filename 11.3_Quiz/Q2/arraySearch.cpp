#include <iostream>
#include <iterator>

int getValidInput()
{
    std::cout << "Gimme between 1 and 9: ";
    int num{};
    std::cin >> num;

    if (std::cin.fail())
    {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        return getValidInput(); //recurse to recall function until good input
    }
    return num;
}


int main()
{
    int searchVal {getValidInput()};

    constexpr int array[]{ 4, 6, 7, 3, 8, 2,  1, 9, 5 };
    int searchIndex{ -1 };
    for (int index{ 0 }; index < static_cast<int>(std::size(array)); ++index)
    {
        std::cout << array[index] << ' ';
        if(array[index] == searchVal)
            searchIndex = index;
    }
    std::cout << '\n';

    std::cout << "The number " << searchVal << " has index " << searchIndex;

    return 0;
}
