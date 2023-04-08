def binarySearch(arr, left, right , item):

    while left <= right:
        middle = (left + right) // 2
        if arr[middle] == item:
           return middle
        elif arr[middle] < item:
           left = middle + 1
        else:
           right = middle - 1
    return -1


arr  = [2, 3, 4, 10, 40]
item = 10
left = 0
right = len(arr)-1
index = binarySearch(arr, left, right, item)

if(index == -1):
    print("Item not found")
else:
    print(f"item found at index {index}")

