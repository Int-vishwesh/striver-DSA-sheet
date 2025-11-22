#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int, int> mpp;
        
        for(int i = 0; i < nums.size(); i++) {
            mpp[nums[i]]++;                     //[4] = 0 -> [4]++  = 1
        }
        for(auto i : mpp) {
            if(i.second == 1) {
                return i.first;
            }
        }
        
        return -1;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {3, 3, 4, 1, 2, 1, 2};
    cout << "Single Number: " << sol.singleNumber(nums) << endl;
    return 0;
}