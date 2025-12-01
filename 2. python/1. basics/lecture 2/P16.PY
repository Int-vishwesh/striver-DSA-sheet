class Solution:
    def __init__(self, n): #constructor
        for i in range(n):
            for j in range(i + 1):
                print(chr(65 + i), end=' ')
            print()

''' pattern output:

A
B B
C C C
D D D D

'''

if __name__ == "__main__":
    size = int(input("enter size: "))

    print("16. output:")
    Solution(size)
    