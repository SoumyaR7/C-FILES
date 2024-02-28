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
    int n;
    cout<<"input n\n";
    cin>>n;
    int f=factorial(n);
    cout<<"factorial of "<<n<<" is "<<f;
    return 0;
}