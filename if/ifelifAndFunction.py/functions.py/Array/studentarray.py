# student_data = {}
# num_students = int(input("Enter the number of students: "))

# for _ in range(num_students):
#     name = input("Enter student NAME (e.g., Atharva): ").strip()
#     marks = input("Enter marks (leave blank if absent): ").strip()

#     if marks == "":
#         student_data[name] = None  # Student absent
#     else:
#         try:
#             student_data[name] = float(marks)
#         except:
#             print("Invalid marks! Marking as absent.")
#             student_data[name] = None

# # Calculate average of students who attended
# present_marks = [m for m in student_data.values() if m is not None]
# if present_marks:
#     average = sum(present_marks) / len(present_marks)
# else:
#     average = 0

# # Count absent students
# absent_count = sum(1 for m in student_data.values() if m is None)

# # Find most frequent marks
# from collections import Counter
# counts = Counter(present_marks)
# if counts:
#     max_freq = max(counts.values())
#     most_frequent = [mark for mark, freq in counts.items() if freq == max_freq]
# else:
#     most_frequent = []

# print(f"\nAverage Marks: {average:.2f}")
# print(f"Absent Students: {absent_count}")

# if most_frequent:
#     print("Most Frequent Mark(s):", ", ".join(str(m) for m in most_frequent))
# else:
#     print("No marks to find most frequent.")


Student_data = {}
num_students = int(input("Enter the Number of students; "))
for i in range(num_students):
    name = input("Enter Student Name :").tsrip()
    marks = int(input("Enter the MArks :"))
    
    if marks == "a":
        student_data[name] = None
    else:
        try:
            student_name[name] = float(marks)
         
        except :
            print("Invalid Marks ")
            student_data[name] = None
            
            