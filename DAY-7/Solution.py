a = int(input("Enter first number: "))
b = int(input("Enter second number: "))

if a < b:
    minimum = a
else:
    minimum = b

gcd = 1

for i in range(1, minimum + 1):
    if a % i == 0 and b % i == 0:
        gcd = i

lcm = (a * b) // gcd

print("LCM =", lcm)