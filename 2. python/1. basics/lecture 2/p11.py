class Solution:
    def __init__(self, n): #constructor
        for i in range(n):
            for j in range(i + 1):
                if (i + j) % 2 == 0:
                    print("1", end=" ")
                else:
                    print("0", end=" ")
            print()

''' pattern output:

1
0 1
1 0 1
0 1 0 1

'''

if __name__ == "__main__":
    size = int(input("enter size: "))

    print("11. output:")
    Solution(size)