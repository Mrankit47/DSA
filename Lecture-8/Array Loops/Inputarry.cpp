#include<iostream>
using namespace std;

int main()
{
    int size;
    cout<<"enter number size : ";
    cin>>size;
    int marks[size];

    for(int i=1; i<=size; i++)
    {
        cout<<"enter "<<i<<" number : ";
        cin>>marks[i];
    }
    
    cout<<"[";
    for(int i=0; i<size; i++)
    {   
        cout<<marks[i];
        if(i== size-1)
        {
            break;
        }
        else
        {
            cout<<",";
        }
    }
    cout<<"]";
    return 0;
}