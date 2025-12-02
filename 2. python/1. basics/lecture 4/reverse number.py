class solution:
  def __init__(self, n):
    reversed =0
    while n>0:
      digit = n % 10
      reversed = reversed * 10 + digit
      n = n // 10
    print(reversed)

if __name__ == "__main__":
  n = int(input("Enter a number: "))
  obj = solution(n)

    