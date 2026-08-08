#include<iostream>
using namespace std;

int main()
{
    int number;
    cout<<"enter any number : ";
    cin>>number;

    for(int i=1; i<=number; i++)
        {
            for(int k=1; k<i; k++)
            {
                cout<<" ";
            }
            for(int j=1; j<=number-i+1; j++)
            {
                cout<<i;
            }
            cout<<endl;
        }
        return 0;
}