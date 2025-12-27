from sys import stdin

data=stdin.read().split()
count=0
for i in range(1,int(data[0])+1):
    count=max(count,int(data[2*i-1])+int(data[2*i]))
print(count)
