#include <iostream>
using namespace std;

int main()
{
    int car = 1;
    if (true)                       // while expression = true
    {                               // ...
        cout << car <<endl;
    }

    if (car)
    {
        cout<<"car = "<<car<<endl;
    }

    if (car >= 0)
    {
        cout<<"car have: "<< car<<endl;
        if (car >= 10)
        {
            cout <<"car have more then 10 or 10 "<<endl;
        }
        else if (car < 10)
        {
            cout <<"car have < 10"<<endl;
        }
    }   

    cout<< "Difficulty Levels\n";
    cout<< "1 - Easy\n";
    cout<< "2 - Normal\n";
    cout<< "3 - Hard\n";
    int choice;
    cout<<"Choice: ";
    cin>>choice;
    switch(choice)
    {
        case 1: // comma, not dots 
            cout<<"You picked Easy.\n";
            break;
        case 2:
            cout<<"You picked Normal.\n";
            break;
        case 3:
            cout<<"You picked Hard.\n";
            break;
        default: //else
            cout<<"You pick a illegal choice.\n";
    }       
    
    return 0;
}

