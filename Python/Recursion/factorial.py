def Factorial(n):
  fact = 1
  if n == 0 or n == 1:
    return fact
  else:
    return n * Factorial(n - 1)

n = int(input("Enter n: "))
print("The factorial of ", n, "is: ", Factorial(n))
