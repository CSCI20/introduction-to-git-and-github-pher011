#include <iostream>
using namespace std;

int dozens_to_eggs(int dozens) {
    return dozens * 12;
}

int main() {
    // Get the number of dozens from the user
cout << "Enter the number of dozens of eggs: ";
    int dozens;
    cin >> dozens;

    // Calculate and display the total number of eggs
int total_eggs = dozens_to_eggs(dozens);
    cout << "There are " << total_eggs << " eggs in " << dozens << " dozens." << endl;

    return 0;
}
