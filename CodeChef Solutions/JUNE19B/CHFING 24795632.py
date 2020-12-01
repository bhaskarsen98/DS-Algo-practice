import math as mt
t=int(input())
for i in range(t):
    n1,k1=input().split()
    n=int(n1)
    k=int(k1)
    ans=0
    if n==2:
        if k==1:
            print(0)
            continue
        else:
            ct=(k-1)*(k)
            ans=ct//2
            print(ans00000007)
            continue

    if(n>=k):
        ans=k-1
        print(ans00000007)
        continue
    else:
        ct=k-1
        a0=ct-1;
        nt=(ct//(n-1))
        if((ct%(n-1))!=0):
            nt+=1
        L=((nt-1)*(-(n-1)))
        ans=(nt*(2*ct+L))//2
        print(ans00000007)

