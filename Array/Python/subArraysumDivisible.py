from collections import defaultdict
nums = [4,5,0,-2,-3,1]

k = 5

sum,count, mp = 0,0, defaultdict(int, {0:1})

for i in nums:
    sum += i
    rem = sum%k
    count += mp[rem]
    mp[rem] += 1

print(count)
