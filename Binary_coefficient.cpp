#include<iostream>
using namespace std;
int factorial(int n)
{
    int f=1;
    for(int i=n;i>=1;i--)
    {
        f*=i;
    }
    return f;
}
int main()
{
 int n,r;
 cout<<"input n";
 cin>>n;
 cout<<"input r";
 cin>>r;
 int ncr=(factorial(n)/(factorial(n-r)*factorial(r)));
 cout<<"ncr for given n and r is "<<ncr;
    return 0;
}