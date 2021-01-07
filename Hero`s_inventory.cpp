#include <iostream>
using namespace std;
int main(){
    const int MAX_ITEMS = 10;
    string inventory[MAX_ITEMS]; //  <=10 string object in array
    int numltems = 0;
    inventory[numltems++] = "sword"; 
    inventory[numltems++] = "armor";
    inventory[numltems++] = "shield";
    for(int i = 0; i <= numltems;i++){
        cout<<inventory[i]<<" "<<endl;
    }
    cout<<inventory[0].size();
    cout<<inventory[numltems].size();










    return 0;
}