term = int(input("Enter the number of terms: "))
a = 0
b = 1
print("Fibonacci Sequence:", end=" ")
for i in range(term):
    print(a, end=" ")
    next_term = a + b
    a = b
    b = next_term