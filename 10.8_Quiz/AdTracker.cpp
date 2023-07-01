#include <iostream>

struct AdStats
{
    int adsShown {};
    int percentClicked {};
    double incomeOnClick {};
};

void printAdStats(AdStats tracker)
{
    std::cout << "We showed " << tracker.adsShown << " ads and " << tracker.percentClicked << "\% were clicked.\n";
    std::cout << "At $" << tracker.incomeOnClick << " per click we made $" << tracker.adsShown * tracker.incomeOnClick * (0.01 * tracker.percentClicked); 
}

int main()
{
    AdStats adTracker{};

    std::cout << "How many ads were shown? ";
    std::cin >> adTracker.adsShown;

    std::cout << "What percentage of the ads were clicked (int)? ";
    std::cin >> adTracker.percentClicked;

    std::cout << "How much do we make per click (double)? ";
    std::cin  >> adTracker.incomeOnClick;

    printAdStats(adTracker);
}
