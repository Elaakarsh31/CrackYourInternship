nums = [1,1,2]
index = set()
temp = []

for i in range(len(nums)):
    index.add(nums[i])
for i in index:
    temp.append(i)

nums = temp
print(nums)
