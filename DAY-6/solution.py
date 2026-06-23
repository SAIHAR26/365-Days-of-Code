a=(int(input("Enter a: ")))
b=(int(input("Enter b: ")))
min=0
gcd=1
if a<b:
    min = a
else:
    min = b
for i in range(1, min + 1):
    if a % i == 0 and b % i == 0:
        gcd = i
print("GCD =", gcd)