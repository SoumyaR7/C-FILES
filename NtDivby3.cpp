#include <iostream>
using namespace std;
int main()
{
    cout<<"the numbers not divisible by 3\n ";
    for (int i=0;i<=100;i++)
    {
        if (i%3==0)
        continue;
        else
        cout<<i<<endl;
    }
    return 0;
}