from typing import List
from collections import defaultdict

class Solution:
    def singleNumber(self, nums: List[int]) -> int:
        
        mpp = defaultdict(int) # 1. (defaultdict acts like C++ map)
        
        for num in nums:
            mpp[num] += 1  # [4]= 0 -> [4]++ = 1

        for key, value in mpp.items():
            if value == 1:
                return key
        
        return -1

if __name__ == "__main__":
    sol = Solution()
    nums = [4, 1, 2, 1, 2]
    print(f"Single Number: {sol.singleNumber(nums)}")