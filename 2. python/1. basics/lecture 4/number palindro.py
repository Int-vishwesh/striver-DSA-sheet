class solution:
     def __init__(self, n):
          original_n = n
          reversed_n = 0
          while n != 0:
              digit = n % 10
              reversed_n = reversed_n * 10 + digit
              n = n // 10
          if original_n == reversed_n:
              print(f"{original_n} is a palindrome number.")
          else:
              print(f"{original_n} is not a palindrome number.")

if __name__ == "__main__":
    n = int(input("Enter number:\n"))
    print("output:")
    pattern = solution(n)