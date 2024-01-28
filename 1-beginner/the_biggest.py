a, b, c = input().split()
a = int(a)
b = int(b)
c = int(c)

the_biggest = int((a + b + abs(a - b)) / 2)

if the_biggest >= c:
    print(f"{the_biggest} eh o maior")

else:
    print(f"{c} eh o maior")