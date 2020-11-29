//guess my number 
#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{   
    cout <<"***Welcome to Guess my number***"<<endl;
    srand(static_cast<unsigned int>(time(0)));
    int randomNumber = rand();
    int number = (randomNumber % 100) + 1;
    int choice;
    int tries = 5;
    while(tries != 0 ) 
    {
        cout<<"You have "<<tries<<" tries:"<<endl;
        cout<<"Enter you number:"<<endl;
        cin>>choice;
        tries--;
        if (number > choice)
        {
            cout<<"Too low!"<<endl;
        }
        else if (number < choice)
        {
            cout<<"Too high!"<<endl;
        }
        else
        {
            cout<<"\nThat`s it! You got in "<< tries <<" guesses!"<< endl;
            break;
        }

    }
    if (tries == 0 && choice != number)
    {
        cout<<"Sorry, you will be lucky next time :("<<endl;
    }


    return 0;
}

