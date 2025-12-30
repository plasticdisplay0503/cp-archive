"Problem Link -> https://www.codechef.com/problems/CHEFBAKES77"
## Time Complexity -> O(1)

## Idea
"""
The maximum number of cakes a vehicle can carry will be ceil(y/x) 
The minimum number of vehicles required will be floor of (n/z) where z=floor(y/x)
Although python has math library to calculate both floor,ceil.
But it is not advised to use them as for large function they will make code slower
"""

"Formula used"
"Floor (y/x) =(y//x)"
"Ceil (y/x)= (y+x-1)//x"


## Code
"This is a simple code as constraints are very small don't cry on A,B of div3/4 for TLE"
"Constraints are usually that O(n^2) solutions are able to pass and memory limit is not an issue"
## Here using sys.stdin doesn't create a difference because of only one input-output case
n,x,y=map(int,input().split())

z=y//x    ## Calulcating floor(y/x)
print((n+z-1)//z)    ## Calculating ceil(n/z)
