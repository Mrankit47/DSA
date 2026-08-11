#include<iostream>
using namespace std;

int main()
{
    int number;
    cout<<"enter any number : ";
    cin>>number;

    for(int i=0; i<number; i++)
    {
        for(int j=0; j<number-i-1; j++)
        {
            cout<<" ";
        }
        cout<<"*";
        if(i!=0)
        {
            for(int j=0; j<2*i-1; j++)
            {
                cout<<" ";
            }
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=0; i<number; i++)
    {
        for(int j=i+1; j>1; j--)