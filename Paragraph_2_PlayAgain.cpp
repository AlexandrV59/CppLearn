//works with wile 
#include <iostream>
using namespace std;
int main()
{
    char word = 'y';
    while (word == 'y')
    {
        cout<<"\n**Played an exciting game**"; //meme
        cout<<"Do you want to play again?(y/n):";
        cin >> word;
    }
    cout<<"Bye\n";
    return 0;
}   