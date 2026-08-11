#include<iostream>
using namespace std;

int main()
{
    int number; 
    
    cout<<"ente any number : ";
    cin>>number;
    
    for(int i=1; i<=number; i++)
    {
        char c ='A';
        for(int j=number; j>i; j--)
        {
            cout<<" ";
        }
        for(int j=1; j<=i; j++)
        {
            cout<<c;
            c++;
        }
        for(int j=1; j<i; j++)
        {
            c-=2;
            cout<<c;
            c--;
        }
        cout<<endl;
    }
    return 0;
}