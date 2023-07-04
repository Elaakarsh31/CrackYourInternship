a = [0,0,1]

for i in range(len(a)):
    if a[i] == 0:
        a.remove(a[i])
        a.append(0)
