#include<iostream>
using namespace std;
int main()
{
int n;
cout<<"enter an number \n";
cin>>n;
while(n>0)
{
    cout<<"+ve no. "<<n<<endl;
    cout<<"enter next no :)\n";
    cin>>n;
}
if(n<0)
cout<<"program end due to -ve number :(\n";
    return 0;
}