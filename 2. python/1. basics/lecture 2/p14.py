class Solution:
    def __init__(self, n): #constructor
        for i in range(1, n + 1):
            for j in range(i):
                print(chr(ord('A') + j), end=' ')
            print()

''' pattern output:

A
A B
A B C
A B C D

'''

if __name__ == "__main__":
    size = int(input("enter size: "))

    print("1. output:")
    Solution(size)