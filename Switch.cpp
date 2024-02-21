#include<iostream>
using namespace std;
int main()
{
    char button;
    cout<<"input a character";
    cin>>button;
    switch (button)
    {
    case 'a':
        cout<<"hello";
        break;
    case 'b':
        cout<<"si";
        break;
    case 'c':
        cout<<"hola";
        break;
    case 'd':
        cout<<"ciao";
        break;
    
    default:
    cout<<"i am still learning more !";
        break;
    }
    return 0;
}