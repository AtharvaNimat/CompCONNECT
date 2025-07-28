sumofdigits=0
num=int(input("Enter the number:"))
while(num!=0):
    temp = num%10
    sumofdigits += temp
    num= num//10
    print("The digits :",sumofdigits)
