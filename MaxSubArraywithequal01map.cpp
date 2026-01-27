#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    int arr[11] = {0,0,1,0,1,0,0,0,1,1,1};
    int n = 11;

    unordered_map<int, int> mp;

    int count0 = 0, count1 = 0;
    int maxLen = 0;
    int start = -1, end = -1;

    mp[0] = -1; // when count0 == count1

    for (int i = 0; i < n; i++) {
        if (arr[i] == 0)
            count0++;
        else
            count1++;

        int diff = count0 - count1;

        if (mp.find(diff) != mp.end()) {
            int len = i - mp[diff];
            if (len > maxLen) {
                maxLen = len;
                start = mp[diff] + 1;
                end = i;
            }
        } else {
            mp[diff] = i;
        }
    }

    cout << "Length: " << maxLen << endl;
    cout << "Subarray: ";
    for (int i = start; i <= end; i++) {
        cout << arr[i] << " ";
    }
}
