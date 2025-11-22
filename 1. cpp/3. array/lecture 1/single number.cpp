#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        for (int i = 0; i < nums.size(); i++) 
        {
            int count = 0;
            for (int j = 0; j < nums.size(); j++) 
            {
                if (nums[j] == nums[i]) {
                    count++;
                }
            }
            if (count == 1) {
                return nums[i];
            }
        }
        return -1; // Should not reach here
    }
};

int main() {
    Solution sol;
    vector<int> nums = {1, 1, 2, 3, 2};
    cout << "Single Number: " << sol.singleNumber(nums) << endl;
    return 0;
}