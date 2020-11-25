#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
    srand(static_cast<unsigned int>(time(0)));
    //We start the random number generator
    int randomNumber = rand();
    // Launch random choice
    int die = (randomNumber % 21) + 1; // range (1-6)
    cout << "you rolled a : "<< die << endl;
    return 0;
}