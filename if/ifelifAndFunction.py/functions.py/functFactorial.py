def fact(n):
    if(n<=1):
        return n
    return n * fact(n-1)
print(fact(n = int(input("Enter a Number:"))))