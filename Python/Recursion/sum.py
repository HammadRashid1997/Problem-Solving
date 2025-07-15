# Function to add numbers till n
def Sum(n):
    sum = 0
    if n == 0 or n == 1:
        return n;
    else:
        return sum + Sum(n - 1)

# Main starts here
n = int(input("Enter the number n: "))
print("The sum is: ", Sum(n))
