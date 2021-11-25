

MAX = 100001
 

def printGolombSequence(N):

 
    
    arr = [0] * MAX
 
    
    cnt = 0
 
    
    arr[0] = 0
    arr[1] = 1
 
    M = dict()
 
    
    M[2] = 2
 
    
    for i in range(2, N + 1):
 
       
        if (cnt == 0):
            arr[i] = 1 + arr[i - 1]
            cnt = M[arr[i]]
            cnt -= 1
 
        else:
            arr[i] = arr[i - 1]
            cnt -= 1
 
        M[i] = arr[i]
 
    
    for i in range(1, N + 1):
        print(arr[i], end=" ")
       
        
      


a = int(input())
N = a
printGolombSequence(N)
l=[1]
q=1
d=2
s=0
r=1
while 1>0:
    t=0
    for j in range(2):
        if r==a:
            break
        q+=1
        for i in range(d):
            if r==a:
               break
            l.append(q)
            r+=1
    d+=1
    if r==a:
        break
for d1 in range(len(l)):
    s+=int(l[d1])
print(s)