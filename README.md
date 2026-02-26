#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {

    srand(time(0));

    char choice;

    cout << "Dice Rolling Simulator" << endl;

    do {
       
        int die1 = rand() % 6 + 1;
        int die2 = rand() % 6 + 1;

        cout << "\nYou rolled: " << die1 << " and " << die2 << endl;
        cout << "Total: " << die1 + die2 << endl;

        cout << "\nWould you like to roll again? (y/n): ";
        cin >> choice;

    } while (choice == 'y' || choice == 'Y');

    cout << "Thanks for playing!" << endl;

    return 0;
}
