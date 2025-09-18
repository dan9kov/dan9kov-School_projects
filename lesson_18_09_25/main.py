import math
a = 5
b = 10
x0 = 0
y0 = 0
L = 1000000

arr_x = [x0]
arr_y = [y0]

radius = 300

n = 1000000
cnt_circle = 0

for i in range(1, n):
    arr_x.append((arr_x[i - 1] * a + b) % L)
    arr_y.append((arr_y[i - 1] * a + b) % L)

for i in range(0, n):
    if (math.sqrt(arr_x[i] ** 2 + arr_y[i] ** 2) <= L):
        cnt_circle += 1
print(cnt_circle / n)