t = int(input())
a = [0] * 33
 
for i in range(2,32):
    a[i-1] = i * (1 << i) - 1
 
for _ in range(t):
    n = int(input())
    for i in range(1,31):
        if n<=a[i]:
            print(i)
            break 