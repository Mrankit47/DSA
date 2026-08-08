#include<iostream>
using namespace std;

int main()
{
    int number;
    char c='A';

    cout << "enter any number : ";
    cin >> number;

    for(int i = 1; i<=number; i++ )
    {
        for(int j=1; j<i; j++)
        {
            cout<<" ";
        }
        for(int j=1; j<=number-i+1; j++)
        {
            cout<<c;
        }
        c++;
        cout<<endl;
    }
    return 0;
}