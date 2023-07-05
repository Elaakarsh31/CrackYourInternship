arr = [1,3,4,2,2]
cnt = [0]*len(arr)

for i in range(len(arr)):
    if cnt[arr[i]]:
        print(arr[i])
    cnt[arr[i]] = 1
