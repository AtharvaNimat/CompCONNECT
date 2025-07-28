def no(n):
    if(n==0):
        return 0
    return no(n-1)+n
n=no(0)
print(n)