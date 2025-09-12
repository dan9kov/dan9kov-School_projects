arr = []
def perevod(a, ss):
    while (a >= ss):
        arr.append(a % ss)
        a //= ss
    arr.append(a)

x = 456
mx = 0
z = 0
for i in range(2, 11):
    arr = []
    perevod(x, i)
    sm = 0
    for j in arr:
        if (j % 2 == 1):
            sm += 1
    if sm >= mx:
        mx = sm
        z = i
print(z)