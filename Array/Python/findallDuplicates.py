from collections import defaultdict

nums = [1,1,2]
mp = defaultdict(int)
ans = []
for i in nums:
    mp[i] += 1

for m in mp:
    if mp[m] == 2:
        ans.append(m)

print(ans)
