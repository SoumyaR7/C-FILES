#include<iostream>
using namespace std;
int main()
{
//#ifndef ONLINE_JUDGE
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
//#endif
    int savings;
    cout<<"enter savings ";
     cin>>savings;

     if(savings>5000)
     {
        cout<<"date with neha\n";
        if(savings >10000)
        cout<<"ride with neha";
     }
     else if(savings<5000 && savings>3000)
     cout<<"date with rashmi\n";
     else 
     cout<<"hangout with friends\n";




    return 0;
}