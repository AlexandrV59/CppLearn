#include <iostream>
using namespace std;
int main(){
    int pos;
    string element;
    int er;
    string a;
    cin>>a;
    cin>>pos;
    cin>>element;
    cin>>er;
    cout<<a.size()<<endl; //how many characters in word
    cout<<"at position "<<pos<<" is: "<<a[pos]<<endl; //word position
    cout<<a.find(element);//word pos v2 
    cout<<a.erase(er)<<endl;
    cout<<a;
    return 0;
}