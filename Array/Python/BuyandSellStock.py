a = [2,4,1]

profit, max = 0,0
for i in range(1, len(a)):
    profit += a[i] - a[i-1]
    if(profit > max):
        max = profit
    if(profit < 0):
        profit = 0

print(max)
