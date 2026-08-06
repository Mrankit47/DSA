#include<iostream>
using namespace std;

int main()
{
    int number;
    char ch = 'A';
    cout<<"enter any number : ";
    cin>>number;

    for(int i=0; i<number; i++)
    {
        for(int j=0; j<number; j++)
        {
            cout<<ch;
             ch +=1;
        }
        cout<<endl;
    
    }
    return 0;
}