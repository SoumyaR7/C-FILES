#include<iostream>
using namespace std;
int main()
{
 int i,a,b,j;
 cout<<"input a";
 cin>>a;
 cout<<"input b";
 cin>>b;
 cout<<"printing all prime numbers between "<<a<<" and "<<b<<endl;
 for( i=a;i<=b;i++)//for ranging numbers from a to b
 {
    for( j=2;j<i;j++)// for checking every number's primitivity
    {
        if(i%j==0)
        {
            break;
        }
    }
    if(i==j)
    cout<<i<endl;
 }
    return 0;
}