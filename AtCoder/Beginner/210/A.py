n,a,x,y=map(int,input().split())
print(n*x if n<a else a*x+(n-a)*y)

"""
Approach
If we want less number of cabbages than required discount we will buy them directly at price x
Else we will buy first "a" at price x and remaining at discounted price y
"""

"""This could have been made faster by

from sys import stdin
n,a,x,y=map(int,stdin.read().split())
print(n*x if n<a else a*x+(n-a)*y)"""
