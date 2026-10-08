#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter any number : ";
    cin>>n;
    for(int i=2; i*i<=n; i++)
    {
        if(n%i==0)
        {
            cout<<"non prime";
            break;
        }
        else
        {
            cout<<"prime";
            break;
        }
        
    }
    return 0;
}