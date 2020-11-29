#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int main()
{
    //srand(static_cast<unsigned int>(time(0)));
    //int randomNumber = rand();
    //int number=(randomNumber % 100) + 1;
    int choice;
    int number;
    cin>>choice;
    int tries = 0;
    while(number != choice)
    {   
        srand(static_cast<unsigned int>(time(0)));
        int randomNumber = rand();
        int number = (randomNumber % 5) + 1;
        if (number != choice)
        {
            tries++;
        }
        else{break;}
    }
    cout << tries<< endl;
    return 0;
}