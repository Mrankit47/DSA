#include<iostream>
using namespace std;

int main()
{
    int number;

    cout<<"enter any number : ";
    cin>>number; 
    for(int i=1; i<=number; i++)
    {   
        char c = 'A'+i-1;
        for(int j=1; j<=i; j++)
        {
            cout<<c;
            c--;
        }
        cout<<endl;
    }
    return 0;
}