class solution:
     def __init__(self, n):
         count = 0
         while n != 0:
             n = n // 10
             count += 1
         print("Number of digits:", count)

if __name__ == "__main__":
    n = int(input("Enter number:\n"))
    print("output:")
    pattern = solution(n)