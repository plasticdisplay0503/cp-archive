from sys import stdin

data=stdin.read().split()
x=list(map(int,data[1:]))
x.sort()

print(min(x[-1]-x[1],x[-2]-x[0]))
