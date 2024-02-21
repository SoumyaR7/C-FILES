#include<iostream>
using namespace std;
int main()
{
    int pktmon=3000;
    for (int dt=1;dt<=30;dt++)
    {
        if(dt%2==0)
        continue;//allowed to go outside on odd dates only
        else
        cout<<"on date "<<dt<<" allowed to go outside\n";
        if(pktmon==0)
        {
            cout<<"pocket money is zero\n";
            break;// if the pocket money becomes zero the exit the loop
        }
        pktmon=pktmon-300;
    }
    return 0;
}