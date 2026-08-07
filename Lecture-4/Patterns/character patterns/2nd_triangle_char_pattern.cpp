#include<iostream>
using namespace std;

int main()
{
    int number;
    cout<<"enter any number : ";
    cin>>number;
    
    for(int i=1; i<=number; i++)
    {   char ch ='A';
        for(int j=1; j<i; j++)
        {
            cout<<ch;
            ch++;
        }
        cout<<endl;
    }
    return 0;

}