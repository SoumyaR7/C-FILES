#include<iostream>
using namespace std;
int main()
{
    int a,b,n;
     cout<<"enter two numbers";
     cin>>a>>b;
    char op;
    cout<<"enter the operation";
    cin>>op;
    switch (op)
    {
    case '+':
        cout<<"addition: "<<(a+b);
        break;
    case '-':
        cout<<"subtraction: "<<(a-b);
        break;
    case '/':
        cout<<"division: "<<(a/b);
        break;
    case '*':
        cout<<"multipication: "<<(a*b);
        break;    
    
    default:
    cout<<"enter another operator pls";
        break;
   }
    return 0;
}