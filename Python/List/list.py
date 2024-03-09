# A program to print a list

list = ["apple", "banana", "orange", "strawberry"]

print("The list is: ", list)

arr = ['apple', 'banana', 'orange', 'peach', 'strawberry']    # a list containing fruit items
s = len(arr)
print("The length of arr is: ", s)    # can be written as len(arr)

a = ['apple', 'banana', 'peach', 'orange', 'strawberry', 'mango', 'grapes']

# Function to find the length
def length(a):
    l = 0
    for i in range(0, len(a)):
        l += 1
    return l

s = length(a)
print("The length of list a is: ", s)

# Append an element in a list
arr = []
for i in range(len(arr)):
  l = int(input())    # enter the value
  arr.append(l)
print("The array is: ", arr)

# Concatenate
a = [1, 3, 5, 7, 9]
b = [0, 2, 4, 6, 8]

c = a + b
print(c)



