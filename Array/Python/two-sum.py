nums = [3,2,4]
target = 6
result = []

for i in range(len(nums)):
    for j in range(i+1, len(nums)):
        if nums[i] + nums[j] == target:
            result.append(i)
            result.append(j)
print(result)
