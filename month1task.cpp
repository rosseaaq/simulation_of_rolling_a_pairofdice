#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
int main()
{
    srand((unsigned int)time(NULL));
    int roll = 0, sides = 6, dice = 10;
    char con;
    do
    {
        roll = (rand() % sides) + 1;
        cout << "Dice " << ": " << roll << endl;
		cout << "Roll again? (y/n): ";
		cin >> con;
    }
	while (con == 'y' || con == 'Y');
    return 0;
}