prices = [1,2,3,4,5]
temp = []
profit = 0

for i in range(1, len(prices)):
    temp.append(prices[i] - prices[i-1])

for i in temp:
    if i > 0:
        profit += i
print(profit)
