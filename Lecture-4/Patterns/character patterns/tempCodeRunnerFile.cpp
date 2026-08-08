#include<iostream>
using namespace std;

int main()
{
    int number;

    cout<<"enter any number : ";
    cin>>number; 
     char c = 'A';
    for(int i=1; i<=number; i++)
    {   
        for(int j=1; j<=i; j++)
        {
            cout<<c;
            c--;
        }
        c=c+1;
        cout<<endl;
    }
    return 0;
}