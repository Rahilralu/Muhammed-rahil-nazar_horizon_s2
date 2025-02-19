import matplotlib.pyplot as plt
import math
x_values = []
y_values = []
connections=set()
visited = set()  
a = int(input("Enter number of points: "))
for i in range(a):
    x = int(input(f"Enter x value for point {i+1}: "))
    y = int(input(f"Enter y value for point {i+1}: "))
    x_values.append(x)
    y_values.append(y)
print("Inputted points:")
print(x_values, y_values)
for i in range(a):
    if i in visited:
        continue 
    min_distance = float('inf')
    nearest_point = None
    for j in range(a):
        if i != j and j not in visited and (i, j) not in connections and (j, i) not in connections:
            distance = math.sqrt((x_values[j] - x_values[i])*2 + (y_values[j] - y_values[i])*2)
            if distance < min_distance:
                min_distance = distance
                nearest_point = j
    if nearest_point is not None:
        connections.add((i, nearest_point))
        visited.add(i)
        visited.add(nearest_point)
plt.scatter(x_values, y_values, color="blue")
for i, j in connections:
    plt.plot([x_values[i], x_values[j]], [y_values[i], y_values[j]])
plt.show()