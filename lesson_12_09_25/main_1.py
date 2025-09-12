arr = []
def perevod(a, ss):
    while (a >= ss):
        arr.append(a % ss)
        a //= ss
    arr.append(a)

x = 43 * 7 ** 103 - 21 * 7 ** 57 + 98
perevod(x, 7)
sm = 0
for i in arr:
    sm += i
print(sm)

#276