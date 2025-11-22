#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxCount = 0;
        int Count = 0;

        for (int num : nums) {
            if (num == 1) {
                Count++;
                maxCount = max(maxCount, Count);
            } else {
                Count = 0;
            }
        }

        return maxCount;
    }
};
int main() {
    Solution sol;
    vector<int> nums = {1, 1, 0, 1, 1, 1};
    cout << "Maximum consecutive ones: " << sol.findMaxConsecutiveOnes(nums) << endl;
    return 0;
}