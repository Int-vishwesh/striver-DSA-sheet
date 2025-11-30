class Solution:
    def __init__(self, n): #constructor
        count = 1
        for i in range(1, n + 1):
            for j in range(1, i + 1):
                print(count, end=' ')
                count += 1
            print()

''' pattern output:

1
2 3
4 5 6
7 8 9 10

'''

if __name__ == "__main__":
    size = int(input("enter size: "))

    print("13. output:")
    Solution(size)