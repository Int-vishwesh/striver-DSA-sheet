class Solution:
    def __init__(self, n):
        for i in range(n, 0, -1):
            for j in range(n - i):
                print("  ", end="") 
            
            for k in range(2 * i - 1):
                print("* ", end="") 
            
            print()

if __name__ == "__main__":
    print("8. pattern height :")
    size = int(input())

    print("8. output:")
    Solution(size)


''' shorter solution
class Solution:
    def __init__(self, n): #constructor
        for i in range(n):
            print("  " * i, end="")
            print("*" * (n - i))



if __name__ == "__main__":
    size = int(input("enter size: "))

    print("1. output:")
    Solution(size)
'''