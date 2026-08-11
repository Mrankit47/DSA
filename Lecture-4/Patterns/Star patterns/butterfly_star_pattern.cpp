#include<iostream>
using namespace std;

int main()
{
    int number;
    cout<<"enter any number : ";
    cin>>number;

    for(int i=0; i<number; i++)
    {
        for(int j=0; j<=i; j++)
        {
            cout<<" *";
        }
        for(int j=i+1; j<number; j++)
        {
            cout<<"  ";
        }for(int j=i+1; j<number; j++)
        {
            cout<<"  ";
        }
        for(int j=0; j<=i; j++)
        {
            cout<<" *";
        }
        cout<<endl;
    }
    for(int i=0; i<number; i++)
    {
        for(int j=number; j>=i+1; j--)
        {
            cout<<" *";
        }
        for(int j=1; j<i+1; j++)
        {
            cout<<"  ";
        }
        for(int j=1; j<i+1; j++)
        {
            cout<<"  ";
        }
        for(int j=number; j>=i+1; j--)
        {
            cout<<" *";
        }
        cout<<endl;
    }
    return 0;
}