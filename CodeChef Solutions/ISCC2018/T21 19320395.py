t=eval(input())
for i in range(0,t,1):
    line = input().split(" ")
    n = int(line[0])
    m = int(line[1])
   #line = input().split(" ")
    print ((m*n)%3)