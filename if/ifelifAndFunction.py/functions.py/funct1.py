def show(n):
    if(n==0):
        return
    print(n)
    show(n-1)
    print("END")
show(3)