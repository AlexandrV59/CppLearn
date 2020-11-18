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
        cout<<"Username:";
        cin>>username;
        cout<<"Password:";
        cin>>password;
        if (username == "AlexandrV" && password == "simplegame")
        {
            cout<<"\n***You're welcome***"<<endl;
            success = true;
        }
        else if (username == "AlexandrV" && password != "simplegame")
        {
            cout<<"Error password, try again:"<<endl;
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