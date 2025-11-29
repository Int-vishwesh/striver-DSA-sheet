class Solution:
    def __init__(self, n):
        for i in range(1, n + 1):
            # first half
            for j in range(1, i + 1):
                print(j, end=' ')
            # spaces
            for j in range(1, 2 * (n - i) + 1):
                print(' ', end=' ')
            # second half
            for j in range(i, 0, -1):
                print(j, end=' ')
            print()

''' pattern output:

1         1
1 2     2 1
1 2 3 3 2 1

'''

if __name__ == "__main__":
    size = int(input("enter size: "))

    print("1. output:")
    Solution(size)