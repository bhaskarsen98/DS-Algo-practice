def gcd(a, b):
    if(a == 0):
        return b
    else:
        return gcd(b% a, a)

def pwr(x, y, p) :
    res = 1     
    x = x % p 
 
    while (y > 0) :
         
        if ((y & 1) == 1) :
            res = (res * x) % p
 
        y = y >> 1      #print(y)
        x = (x * x) % p
         
    return res
    
t = int(input())
for i in range(0, t):
    line = input().split(" ")
    a = int(line[0])
    b = int(line[1])
    c = int(line[2])
    if( a == b):
        j = (pwr(a, c, 1000000007) + pwr(b, c, 1000000007)) % 1000000007
        print(j)
    else:
        l = (pwr(a, c, a- b) + pwr(b, c, a- b)) % (a- b)
        j = gcd(a- b, l)
        print(j)