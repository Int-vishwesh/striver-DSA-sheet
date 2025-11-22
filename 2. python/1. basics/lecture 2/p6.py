class Solution:
    def __init__(self, n): #constructor
        for i in range(n, 0, -1):
            for j in range(1,i+1):
                print(j, end=" ")
            print()

''' pattern output:

1 2 3 4
1 2 3
1 2
1

'''

if __name__ == "__main__":
    size = int(input("enter size: "))

    print("6. output:")
    Solution(size)