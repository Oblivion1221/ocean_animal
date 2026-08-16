#include "water_animal.h"
#include <iostream>
#include <string>

int main()
{
    size_t number;

    std::cout << "Menu:\nClownfish -> 1\nGreat_White_Shark -> 2\nBlue_whale -> 3\nPlease enter the value...\n\n\n";
    std::cin >> number;

    Clownfish nemo("Nemo","Clownfish");
    Great_White_Shark lenny("Lenny","Great_White_Shark");
    Blue_whale Moby_Dick("Moby-Dick","Blue_whale");

    switch (number)
    {
    case 1:
        encyclopedia(nemo);
        break;
    case 2:
        encyclopedia(lenny);
        break;
    case 3:
        encyclopedia(Moby_Dick);
        break;
    default :
        std::cout << "\n------------------------------\n\n";
        std::cout << "Error: false number <" << number << ">\n\n";
        std::cout << "------------------------------\n\n";
        break;
    }
    return 0;
}