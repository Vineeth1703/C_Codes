def binary_search_recursive(arr, beg, end, key):
    if beg > end:
        return -1  # Key not found

    mid = (beg + end) // 2

    if arr[mid] == key:
        return mid
    elif arr[mid] > key:
        return binary_search_recursive(arr, beg, mid - 1, key)
    else:
        return binary_search_recursive(arr, mid + 1, end, key)

# Main programdef binary_search_recursive(arr, beg, end, key):
    if beg > end:
        return -1  # Key not found

    mid = (beg + end) // 2

    if arr[mid] == key:
        return mid
    elif arr[mid] > key:
        return binary_search_recursive(arr, beg, mid - 1, key)
    else:
        return binary_search_recursive(arr, mid + 1, end, key)

# Main program
n = int(input("Enter the size of the array: "))
arr = list(map(int, input("Enter the array elements in ascending order: ").split()))

key = int(input("Enter the key to search: "))

index = binary_search_recursive(arr, 0, n - 1, key)

if index != -1:
    print(f"{key} found at position {index + 1}")
else:
    print(f"{key} not found in the array.")

n = int(input("Enter the size of the array: "))
arr = list(map(int, input("Enter the array elements in ascending order: ").split()))

key = int(input("Enter the key to search: "))

index = binary_search_recursive(arr, 0, n - 1, key)

if index != -1:
    print(f"{key} found at position {index + 1}")
else:
    print(f"{key} not found in the array.")
