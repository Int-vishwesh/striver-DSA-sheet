class Solution:
    def __init__(self, n): #constructor
        for i in range(1,n+1):
            for j in range(1,i+1):
                print(j, end=" ")
            print()

''' pattern output:

1
1 2
1 2 3
1 2 3 4

'''

if __name__ == "__main__":
    size = int(input("enter size: "))

    print("3. output:")
    Solution(size)