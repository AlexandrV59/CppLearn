//operators
#include <iostream>
using namespace std;
//! Not --> !expression
//&& And --> expression1 and expression 2
//||Or --> expression1 (or) || expression2
int main()
{
    string username;
    string password;
    bool success;
    cout<<"***Game Designer's Network***\n"<<endl;
    do
    {
        cout<<"Username:"<<endl;
        cin>>username;
        cout<<"Password:"<<endl;
        cin>>password;
        if (username == "AlexandrV" && password == "simplegame")
        {
            cout<<"\n***You're welcome***"<<endl;
            success = true;
        }
        else if (username == "AlexandrV" || password != "simplegame")
        {
            cout<<"Error password:"<<endl;
            success = false;    
        }
        else if (username != "AlexandrV" && password != "simplegame")
        {
            cout<<"\nWhat's up, who are you ?"<<endl;
            success = false;
        }
    }while (!success); //!success = true, if success = false +-
    return 0;
}   