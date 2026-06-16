num=int(input("enter the number:"))
orgnum=num
rev=0
revnum=0;
while(num!=0):
    rev=num%10
    revnum=revnum*10+rev
    num=num/10
if(orgnum==revnum):
    print("the num is palindrome")
else:
    print("the num is not palindrome")