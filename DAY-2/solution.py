num = int(input("Enter the num: "))
orgnum = num
sum = 0
while orgnum != 0:
    rem = orgnum % 10
    sum += rem * rem * rem
    orgnum //= 10
if sum == num:
    print("The num is Armstrong")
else:
    print("The num is not Armstrong")