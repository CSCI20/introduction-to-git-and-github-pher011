#include <iostream>
#include <map>
#include <string>
void printMenu();
int getChoice();
int main() {
    int choice = getChoice();
    if (choice == -1) {
        return 0;
    }
    std::cout << "You chose: " << choice << ". Enjoy your meal!\n";
    return 0;
}
void printMenu() {
    // Display menu items
    std::cout << "\nWelcome to our restaurant!\n";
    std::cout << "Here's our menu:\n";
    std::cout << "1. Burger - $10.99\n";
    std::cout << "2. Pizza - $9.50\n";
    std::cout << "3. Salad - $5.00\n";
    std::cout << "4. Spaghetti - $8.00\n";
    std::cout << "\n";
}
int getChoice() {
    printMenu();
    int choice;
    std::cin >> choice;
    // Validate the user's input
    if (!std::cin || choice < 1 || choice > 4) {
        std::cout << "Invalid choice. Please enter a valid number.\n";
        return -1;
    }
    return choice;
}
