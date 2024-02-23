//rectangle pattern
#include<iostream>
using namespace std;
int main()
{
    int r,c,x=0,n;
    cout<<"enter row no. ";
    cin>>r;
    cout<<"enter column no. ";
    cin>>c;
    cout<<endl;
    cout<<"rectangle pattern\n";
    for(int i=1;i<=r;i++)
    {
        for(int j=1;j<=c;j++)
        {cout<<"*";}
        cout<<endl;
    }
    cout<<endl;
    cout<<"hollow rectangle pattern\n";
    for(int i=1;i<=r;i++)
    {
        for(int j=1;j<=c;j++)
        {   if((i==1)||(i==r)||(j==1)||(j==c))
            cout<<"*";
            else 
            cout<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<"inverted half pyramid\n";
    for(int i=r;i>=1;i--)
    {
        for(int j=1;j<=i;j++)
        cout<<"*";
        cout<<endl;
    }
    cout<<endl;
    cout<<"half pyramid after 180 deg \n";
    for(int i=r;i>=1;i--)
    {
        for(int j=1;j<i;j++)
        {cout<<" ";}
        for(int k=i;k<=r;k++)
        {cout<<"*";}
        cout<<endl;
    }
    cout<<endl;
     cout<<"half pyramid using numbers \n";
    for(int i=1;i<=r;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
     cout<<"Floyd's triangle \n";
     for(int i=1;i<=r;i++)
     {
        for(int j=1;j<=i;j++)
        {
            cout<<++x<<" ";
        }
        cout<<endl;
     }
     cout<<endl;
    return 0;
}