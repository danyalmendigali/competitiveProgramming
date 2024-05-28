#include <iostream>
#include <vector>
#include <string>
#include <queue>
#include <set>
#include <map>
#include <cmath>
#include <iomanip>
#include <map>
#include <numeric>
#include <algorithm>
#include <unordered_map>
using namespace std;

int maxPoints(vector<int>& nums) {
    unordered_map<int, int> freq;
    for (int num : nums) {
        freq[num]++;
    }

    int prevScore = 0, currScore = 0;
    int prevNum = -1;
    for (auto& [num, count] : freq) {
        int newScore;
        if (num - prevNum == 1) {
            newScore = max(prevScore, currScore);
            currScore = prevScore + num * count;
        } else {
            newScore = prevScore + num * count;
            currScore = newScore;
        }
        prevNum = num;
        prevScore = newScore;
    }

    return max(prevScore, currScore);
}

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }
    cout << maxPoints(nums) << endl;
    return 0;
}
