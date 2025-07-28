num = int(input("Enter the number:"))
while(num!=0):
    temp=num%10
    num //=10
    print(temp,end=" ")