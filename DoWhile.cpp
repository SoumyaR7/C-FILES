#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter an number \n";
    cin>>n;
    do
    {
     cout<<"number = "<<n<<endl;
    } while(n>0);

if(n<0)
 {
    cout<<"program end due to -ve number :(\n";
 }
    return 0;
}