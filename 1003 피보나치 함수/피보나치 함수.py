memo={0:[1,0], 1:[0,1]}
def f(n):
    if n in memo:
        return memo[n]
    a = f(n-1)
    b = f(n-2)
    
    x1 = a[0] + b[0]
    x2 = a[1] + b[1]
    
    memo[n] =[x1, x2]
    
    return memo[n]
T = int(input())

result=[]

for i in range(T):
    result = f(int(input()))
    print(f"{result[0]} {result[1]}")
