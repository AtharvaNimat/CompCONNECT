class student:
    def __init__(self,name,marks):
        self.name = name 
        self.marks = marks
        print("Student Details")
s1 = student("Atharva",56)
print(s1.name,s1.marks)
s2 = student("rahul",67)
print(s2.name,s2.marks)
