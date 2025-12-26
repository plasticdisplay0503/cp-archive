s=input()
t=input()

## Creating a list to store occurenece with a-z as index 0-25 and @ at index -1
s1=[0]*27
t1=[0]*27

for i in range(len(s)):
    "Constraints- All letters are lower-case english alphabets"
    "Ascii values of a-z starts from 97"
    "Using -97(instead of -96) as s1,t1 are 0-indexed and not 1-indexed "
    if ord(s[i])>=97: s1[ord(s[i])-97]+=1 
    else: s1[-1]+=1             ## If s[i] is none of a-z then it is @ (Constraints given)

    if ord(t[i])>=97: t1[ord(t[i])-97]+=1 
    else: t1[-1]+=1

## For s1,t1 list of occurence of atcoder
x=[0,19,2,14,3,4,17]

cond=True               ## Bool for checking if all conditions are true

for i in range(26):
    if i not in x and s1[i]!=t1[i]:
        # print("sex",i)                        "Debugging hints"
        cond=False
        "If there is a difference at any position except atcoder it is never possible to win"
        break

# print(type(s1[4]))                            "Debugging hints"
# print(s1,"\n",t1)                             "Debugging hints"


count=0         # Varaiable for number of differnce in atcoder 

for i in x:
    count+=abs(s1[i]-t1[i])     ## Using abs as we have to count the difference in occurence of atcoder 
    ## To be replaced by @

# print(count,s1[-1]+t1[-1])    ## Debugging hints
if count>int(s1[-1]+t1[-1]):    # If number of @ are less than number of atcoder replacements required
    cond=False                  ## We can never win the game

print("Yes" if cond else "No") 
