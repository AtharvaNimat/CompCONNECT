# create an array of numbers
def linear_search(arr, target):
    for i in range(len(arr)):
        if arr[i] == target:
            return i
    return -1
# These is for user input
# n = int(input("Enter number of elements: "))
# arr = list(map(int, input(f"Enter {n} integers separated by spaces: ").split()))
arr = [10,20,30,40,50,60,70,80,90,100]
print("Array:", arr)
print("Enter the number to search:")
num = int(input())
target = num
result = linear_search(arr, target)
if result != -1:
    print(f"Element found at Index: {result}")
else:
    print("Element not found in the array")
    