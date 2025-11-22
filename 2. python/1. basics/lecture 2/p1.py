class Solution:
    def __init__(self, n): #constructor, self = this ptr
        for i in range(n):
            for j in range(n):
                print("* ", end="") # 'end' to control print in next lineby default
            print()

''' pattern output:

* * * *
* * * *
* * * *
* * * *

'''

if __name__ == "__main__":
    size = int(input("enter size: "))

    print("1. output:")
    Solution(size)