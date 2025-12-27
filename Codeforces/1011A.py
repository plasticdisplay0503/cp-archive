from sys import stdin

data=stdin.read().split()
n,k=map(int(data[:2]))
s=data[-1]
s.sort()

weight=ord(s[0])-96            ## Weight of a-z is 1-26
count=1      ## As for minimum weight in sorted s, first letter must be kept
curr=s[0]    ## Variable for last letter counted

for i in range(1,n):
    if (count==k):  break      ## If we have already k-letter in weight we are done
    elif(ord(s[i])-ord(curr)>=2):    ## As minimum distance of two letters should be 2
        count+=1
        weight+=ord(s[i])-96
        curr=s[i]

print(weight if count==k else -1)

## Follow-up question
"""
Do the same question so as to maximize k( and output should be minimum weight
"""
