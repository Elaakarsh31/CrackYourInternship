def partition(arr, low, high):
    pivot = arr[high]
    i = low-1

    for j in range(low, high):
        if arr[j] < pivot:
            i +=1
            #swap elements
            arr[i], arr[j] = arr[j], arr[i]
    # final swap
    arr[i+1], arr[high] = arr[high], arr[i+1]

    return i+1

def quicksort(arr, low, high):
    if low< high:
        pi = partition(arr, low, high)

        quicksort(arr, low, pi-1)
        quicksort(arr, pi+1, high)

def sortColors(self, nums: list[int]) -> None:
    """
    Do not return anything, modify nums in-place instead.
    """
    quicksort(nums, 0, len(nums)-1)
    print(nums)

arr = [2,0,1]

quicksort(arr, 0, len(arr)-1)
print(arr)
