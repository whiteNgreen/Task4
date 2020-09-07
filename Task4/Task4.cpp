#include <iostream>

int answer;

int main()
{
    std::cout << "Which drink would you prefer?\n" << "1. Coffe\n" << "2. Tea\n" << "3. Coca Cola\n";
    std::cin >> answer;

    if (answer == 1) {
        std::cout << "Coffee is delicious\n";
    }
    if (answer == 2) {
        std::cout << "Tea gives peace of mind\n";
    }
    if (answer == 3) {
        std::cout << "Coke will give you a white smile\n";
    }
}