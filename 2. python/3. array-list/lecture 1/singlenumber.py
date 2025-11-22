from typing import List

class Solution:
    def singleNumber(self, nums: List[int]) -> int:
        n = len(nums)
        
        for i in range(n):
            count = 0
            
            for j in range(n):
                if nums[j] == nums[i]:
                    count += 1
            
            if count == 1:
                return nums[i]
        
        return -1

if __name__ == "__main__":
    sol = Solution()
    nums = [3,3,4, 1, 2, 1, 2]
    print(f"Single Number: {sol.singleNumber(nums)}")