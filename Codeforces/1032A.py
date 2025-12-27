from sys import stdin
from collections import Counter

data=stdin.read().split()
n,k=map(int,data[:2])
x=Counter(data[2:])  

d=max(x.values())    ## Maximum number of one type of utensils remaining
s=((d+k-1)//k)*k    ## Total number of dishes served is ceil(d/k)*k

count=0
for v in x.values():
    count+=s-v
print(count)
