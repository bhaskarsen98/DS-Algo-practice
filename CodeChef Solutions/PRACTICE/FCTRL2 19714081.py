# cook your dish here
t = int(input())
for i in range(0,t):
    n = int(input())
    ans=1
    for j in range(1,n+1):
        ans = ans * j
    print(ans)
