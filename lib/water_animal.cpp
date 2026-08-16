#include "water_animal.h"
#include <iostream>
#include <string>

void encyclopedia(const Water_animal &animal)
{
    std::cout << std::endl << std::endl;
    std::cout << "Hello, who are you?\n";
    std::cout << "Hello I am " << animal.get_name() << std::endl;
    std::cout << "What is your name?\n";
    std::cout << "My name is " << animal.get_nickname() << std::endl;
    std::cout << "where do you live?\n";
    std::cout << animal.live_in() << std::endl;
    std::cout << "What are you eating?\n";
    std::cout << animal.eating() << std::endl;
    std::cout << "What color are you?\n";
    std::cout << animal.color_in_the_coloration() << std:: endl;
    std::cout << "What size are you?\n";
    std::cout << animal.length() << std::endl;
    std::cout << "Thank you very much, bye-bye.\n";
    std::cout << std::endl << std::endl;
}