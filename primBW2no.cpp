#include<iostream>
#include<math.h>
using namespace std;

bool isPrime(int n)
{
    for(int i=2;i<=sqrt(n);i++)// imp point why <= and not <
    {
        if(n%i==0)
        return false;
    }  
     return true;
    
}
 int main()
 {
    int a,b;
     cout<<"input a";
 cin>>a;
 cout<<"input b";
 cin>>b;
 cout<<"printing all prime numbers between "<<a<<" and "<<b<<endl;
    for(int i=a;i<b;i++)
    {
        if(isPrime(i))
        cout<<i<<endl;
    }
    return 0;
 }