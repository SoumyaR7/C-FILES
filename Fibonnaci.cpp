#include <iostream>
using namespace std;
void fib(int n)
{
    int t1=0,t2=1;
    int tx;
    cout<<t1<<" "<<t2<<" ";
    for(int i=1;i<=n;i++)
    {
        tx=t1+t2;
        cout<<tx<<" ";
        t1=t2;
        t2=tx;
    }
}
int main()
{   int n;
    cout<<"input n";
    cin>>n;
 cout<<"fibonnaci series upto "<<n<<"terms"<<endl;
 fib(n);  
    return 0;
}