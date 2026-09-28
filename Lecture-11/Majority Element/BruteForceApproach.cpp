#include <iostream>
#include <vector>
using namespace std;

int majorityElement(vector<int> arr)
{
    int n = arr.size();

    for (int val : arr)
    {
        int freq = 0;

        for (int el : arr)
        {
            if (el == val)
            {
                freq++;
            }
        }

        if (freq >= n / 2)
        {
            return val;
        }
    }

    return -1;
}

int main()
{
    vector<int> arr = {1, 2, 2,4, 3, 3, 3,4,4,4,4,4};

    cout << majorityElement(arr);

    return 0;
}