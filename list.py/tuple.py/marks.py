num = int(input("Enter marks of maths:"))
num1 = int(input("Enter marks of english:"))
num2= int(input("Enter marks of pps:"))
num3 = int(input("Enter marks of science:"))
res = (num+num1+num2+num3)/4
print(res)
if(res>=75):
    print("Your grade is distinction")
elif(res>=60 and res<75):
    print("Your grade is first division")
elif(res>=60 and res<75):
    print("Your grade is second division")
elif(res>=60 and res<75):
    print("Your grade is third division")
else:
    print("You are fail")