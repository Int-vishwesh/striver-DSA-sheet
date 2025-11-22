class Solution:
    def __init__(self, n): #constructor
        for i in range(n):
            for j in range(n - i - 1):
                print("* ", end="")
            print()

''' pattern output:

      * 
    * * * 
  * * * * *
* * * * * * * 

'''

if __name__ == "__main__":
    size = int(input("enter size: "))

    print("1. output:")
    Solution(size)