print("1. Swap Two Numbers using a third variable")
print("2. Swap Two Numbers without using a third variable")
a = int(input("Enter your choice:"))
n1 = int(input("Enter First Number :"))
n2 = int(input("Enter Second Number :"))
if( a == 1):
    # Swap using a third variable
    temp = n1
    n1 = n2
    n2 = temp
    print("After swapping using a third variable:")
    print("First Number:", n1)
    print("Second Number:", n2)
elif( a == 2):
    # Swap without using a third variable
    n1 = n1 + n2
    n2 = n1 - n2
    n1 = n1 - n2
    print("After swapping without using a third variable:")
    print("First Number:", n1)
    print("Second Number:", n2)