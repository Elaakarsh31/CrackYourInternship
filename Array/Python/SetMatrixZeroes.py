arr = [[0,1,2,0],[3,4,5,2],[1,3,1,5]]
# arr = [[1,1,1],[1,0,1],[1,1,1]]
x,y = [], []

def display(arr: list[list[int]])->None:
    for i in arr:
        for j in i:
            print(j, "",end="")
        print("")

row_size = len(arr)
col_size = len(arr[0])

for i in range(row_size):
    for j in range(col_size):
        if arr[i][j] == 0:
            x.append(i)
            y.append(j)

print("Before")
display(arr)

# set column to zero
for i in range(len(x)):
    for j in range(col_size):
        arr[x[i]][j] = 0

# set row to zero
for i in range(len(y)):
    for j in range(row_size):
        arr[j][y[i]] = 0

print("After")
display(arr)
