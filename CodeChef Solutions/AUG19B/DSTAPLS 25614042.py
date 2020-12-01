# cook your dish here
t=int(input())
for i in range(t):
    n,k = list(map(int, input().split()))
    if(k==1):
        print('NO')
        continue
    if(n%(k*k)==0):
        print('NO')
    else:
        print('YES')