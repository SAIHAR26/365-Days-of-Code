isprime=1
n=int(input("enter a num:"))
if n<=1:
    isprime=0
else:
    for i in range(2,n):
        if n%i==0:
            isprime=0
            break

if isprime==1:
    print(f"{n} is a prime number.")
else:
    print(f"{n} is not a prime number.")