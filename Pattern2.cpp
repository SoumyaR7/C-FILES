#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter n"<<endl;
    cin>>n;
    cout<<"ButterFly \n";
      for(int i=1;i<=n;i++)
     {
        for(int j=1;j<=i;j++)
        {cout<<"*";}
        int sp=2*n-2*i;
        for(int k=1;k<=sp;k++)
        {cout<<" ";}
        for(int l=1;l<=i;l++)
        {cout<<"*";}
        cout<<endl;
     }
    for(int i=n;i>=1;i--)
      {
       for(int j=1;j<=i;j++)
        {cout<<"*";}
        int sp=2*n-2*i;
        for(int k=1;k<=sp;k++)
        {cout<<" ";}
        for(int l=1;l<=i;l++)
        {cout<<"*";}
        cout<<endl;
      }
      return 0;
}