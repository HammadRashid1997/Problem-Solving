def missing_number(arr, n):
    # arr.sort()  # sort the list if needed
    sum = ((n * (n + 1)) / 2)
    array_sum = 0
    if n == 0: 
        return -1
    elif n == 1:
        return 'No missing number'
    else:
        for i in range(0, n - 1):
            array_sum = array_sum + arr[i]
        return sum - array_sum
    
# Main program here
arr = []
print(missing_number(arr, len(arr)))

arr = [1]
print(missing_number(arr, len(arr)))

arr = [34]
print(missing_number(arr, len(arr)))

arr = [1, 2, 3, 5, 6]
print(missing_number(arr, len(arr)))

arr = [1, 3, 4, 5, 6]
print(missing_number(arr, len(arr)))

arr = [2, 1, 4, 6, 5]
print(missing_number(arr, len(arr)))


