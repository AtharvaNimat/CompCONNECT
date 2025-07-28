def accept_marks(A):
    n = int(input("Enter the total number of students: "))
    for i in range(n):
        while True:
            x = input(f"Enter the marks scored in FDS for student {i+1}: ")
            if x == "AB":
                x = -1  # indicates Absent students
                break
            try:
                x = int(x)
                if 0 <= x <= 30:
                    break
                else:
                    print("Please enter valid marks out of 30.")
            except ValueError:
                print("Invalid input. Please enter an integer or 'AB'.")
        A.append(x)
    print("Marks accepted & stored successfully.")


def display_marks(A):
    print("\nMarks Scored in FDS:")
    for i in range(len(A)):
        if A[i] == -1:
            print(f"\tStudent {i+1}: AB")
        else:
            print(f"\tStudent {i+1}: {A[i]}")


# Example usage:
marks = []
accept_marks(marks)
display_marks(marks)
