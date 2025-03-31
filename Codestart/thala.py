
n=int(input())
arr =list(map(int, input().split()))
count =0;
for num in arr:
    if num%7 ==0:
        while num>= 7:
            count += 1
            num //=7
    
if count>= n:
    print("YES")
else:
    print("NO")
        
