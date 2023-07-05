arr = [3, 4, 1, 9, 56, 7, 9, 12]
m= 5
arr.sort()
n = len(arr)
min_diff = arr[n-1] - arr[0]
for i in range(n-m+1):
    min_diff = min(min_diff, arr[i+m-1]- arr[i])

print(min_diff)
