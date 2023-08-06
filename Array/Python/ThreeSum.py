nums = [-1,0,1,2,-1,-4]
ans = []
output = []
nums.sort()

for i in range(len(nums)):
    j = i+1
    k = len(nums)-1

    while j<k:
        sum = nums[i] + nums[j] + nums[k]

        if sum == 0:
            ans.append([nums[i], nums[j] ,nums[k]])
            j += 1
            k -= 1
        elif sum > 0:
            k -= 1
        else:
            j+=1

for x in ans:
    if x not in output:
        output.append(x)

for i in output:
    print(i)
