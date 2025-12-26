n=int(input())
s=input()

x=s.index("1")
print("Takahashi" if x%2==0 else "Aoki")


"""
Idea
Since string is 0-indexed and Takahashi is starting the game
If 1 appears at even index Takahashi is picked 0,2,4....index so he will lose the game
Else Aoki will lose
"""

"Another approach without using builtin library"
# for i in range(n):
#     if s[i]=="1":
#         print("Takahashi" if i%2==0 else "Aoki")
#         break
