from typing import List

class Solution:
    def findMaxConsecutiveOnes(self, nums: List[int]) -> int:
        max_count = 0
        count = 0

        for num in nums:
            if num == 1:
                count += 1
                max_count = max(max_count, count)
            else:
                count = 0
        
        return max_count

# This block acts as 'int main()'
if __name__ == "__main__":
    sol = Solution()
    nums = [1, 1, 0, 1, 1, 1]
    
    print(f"Maximum consecutive ones: {sol.findMaxConsecutiveOnes(nums)}")