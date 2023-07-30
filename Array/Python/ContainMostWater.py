height = [1,8,6,2,5,4,8,3,7]

left, right, area = 0,len(height)-1,0

while left<right:
    length = min(height[left], height[right])
    breadth = abs(left-right)
    area = max(length*breadth, area)

    if height[left] < height[right]:
        left += 1
    elif height[left] > height[right]:
        right -=1
    else:
        left +=1
        right -=1
print(area)
