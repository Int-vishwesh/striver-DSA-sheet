class Solution:
    def __init__(self, n): #constructor
        for i in range(n):
            print(" " * (n - i - 1), end="")
            print("* " * (2 * i + 1))
        for i in range(n - 2, -1, -1):
            print(" " * (n - i - 1), end="")
            print("* " * (2 * i + 1))

''' pattern output:

    *
  * * *
* * * * *
  * * *
    *

'''

if __name__ == "__main__":
    size = int(input("enter size: "))

    print("1. output:")
    Solution(size)