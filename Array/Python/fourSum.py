nums = [1,0,-1,0,-2,2]
target = 0
ans = []
output = []
nums.sort()

for a in range(len(nums)):
    for b in range(a+1, len(nums)):
        c = b+1
        d = len(nums) - 1

        while c < d:
            sum = nums[a] + nums[b] + nums[c] + nums[d]
            
            if sum == target:
                ans.append([nums[a], nums[b], nums[c], nums[d]])
                c += 1
                d -= 1
            elif sum > target:
                d -= 1
            else:
                c += 1

for i in ans:
    if i not in output:
        output.append(i)

for i in output:
    print(i)
