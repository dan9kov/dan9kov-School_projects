arr = []
def perevod(a, ss):
    while (a >= ss):
        arr.append(a % ss)
        a //= ss
    arr.append(a)

x = 17 * pow(125, 453) + 117 * pow(5, 231) - 3 * pow(5, 13) - 2357
print(x)
perevod(x, 125)
cnt = 0;
for i in range(len(arr) - 1, -1, -1):
    #print(arr[i])
    if (arr[i] <= 37):
        cnt += 1
print(cnt)