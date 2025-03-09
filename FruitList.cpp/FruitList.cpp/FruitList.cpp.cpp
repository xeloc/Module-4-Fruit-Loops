#include <iostream>
#include <string>

int main() {
    // Declare an array of five fruits
    std::string fruits[5] = { "Apple", "Banana", "Cherry", "Grape", "Orange" };

    std::cout << "Here are the fruits in the list:\n";
    for (const std::string& fruit : fruits) {
        std::cout << fruit << std::endl;
    }

    // Add fruit
    std::cout << "\nAdd two more fruits!" << std::endl;
    std::string newfruits[2];

    std::cout << "Enter a new fruit: ";
    std::getline(std::cin, newfruits[0]);

    std::cout << "Enter another fruit: ";
    std::getline(std::cin, newfruits[1]);

    // New array
    std::string allfruits[7];

    // Copy original fruits
    for (int i = 0; i < 5; ++i) {
        allfruits[i] = fruits[i];
    }

    // Add new fruits
    allfruits[5] = newfruits[0];
    allfruits[6] = newfruits[1];

    std::cout << "\nUpdated list of fruits:\n";
    for (const std::string& fruit : allfruits) {
        std::cout << fruit << std::endl;
    }

    return 0;
}
