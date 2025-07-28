# n = int(input("Enter a number:"))
# fact = 1
# i = 1
# while i <= n:
#     fact *= i
#     i += 1

# print("fact:",fact)

# BY WHILE LOOP
n = int(input("enter a Number:"))
fact = 1
i = 1
for i in range(1,n+1):
    fact *= i
print("factorial is :",fact)