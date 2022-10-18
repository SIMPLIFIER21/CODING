# Python program to find the number of ways to get sum 'x' with 'n' dice
# where x is the sum of values of each face when all dices are thrown
# n is number of dices thrown with m faces
 
# Main function that returns the number of ways to get x

def findWays(m,n,x):
    # Table to store results of subproblems

    table=[[0]*(x+1) for i in range(n+1)] 
    #Initialize all entries as 0
     
    for j in range(1,min(m+1,x+1)): 
        #Table entries for one dice
        table[1][j]=1
         
    # Filling rest of the entries in table using recursive relation
    # where i is number of dice and j is sum
    for i in range(2,n+1):
        for j in range(1,x+1):
            for k in range(1,min(m+1,j)):
                table[i][j]+=table[i-1][j-k]
     
    # Viewing the content of the table with every single output
    dt=table 
    print(dt)
    
     
    return table[-1][-1]
     
# Driver code
print(findWays(4,2,1))
print(findWays(2,2,3))
print(findWays(6,3,8))
print(findWays(4,2,5))
print(findWays(4,3,5))