#include <iostream>
#include <vector>
#include <map>
using namespace std;

int findLucky(vector<int>& arr) {
    map<int, int> freq;

    // Count frequency of each number
    for (int num : arr) {
        freq[num]++;
    }

    int ans = -1;

    // Find the largest lucky integer
    for (auto it : freq) {
        if (it.first == it.second) {
            ans = max(ans, it.first);
        }
    }

    return ans;
}

int main() {
    vector<int> arr = {2, 2, 3, 4, 3, 3, 4, 4, 4};

    cout << findLucky(arr);

    return 0;
}