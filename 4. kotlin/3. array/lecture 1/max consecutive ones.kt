class Solution {
    // In Kotlin, IntArray - primitive arrays (like int[] in Java)
    fun findMaxConsecutiveOnes(nums: IntArray): Int {
        var maxCount = 0
        var count = 0

        for (num in nums) {
            if (num == 1) {
                count++
                maxCount = maxOf(maxCount, count)
            } else {
                count = 0
            }
        }

        return maxCount
    }
}

fun main() {
    val sol = Solution()
    val nums = intArrayOf(1, 1, 0, 1, 1, 1)
    
    println("Maximum consecutive ones: ${sol.findMaxConsecutiveOnes(nums)}")
}