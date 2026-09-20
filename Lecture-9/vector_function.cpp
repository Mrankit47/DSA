#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<char> name = {'a','n','k','i','t'};
    
    // vector function

    // size() for know the vectore size
    cout<< name.size();

    // push back() for add value in last ind
    vector<char> nam;

    nam.push_back('a');
    nam.push_back('n');
    nam.push_back('k');
    nam.push_back('i');
    nam.push_back('t');

    cout<<nam.size();
    
    // pop back() for delete value from last ind
    
    nam.pop_back();
    
    cout<<nam.size();

    // front() for return the first value

    cout<<nam.front();

    // back() for return the last value

    cout<<nam.back();

    // at() for another way to write index

    cout<<nam.at(1);


    return 0;
}