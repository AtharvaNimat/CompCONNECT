import re
def validate_phone_number(phone_number):
    pattern = r"^[789]\d{9}$" # Regex pattern
    if re.fullmatch(pattern, phone_number):
        return "Valid mobile number"
    else:
        return "Invalid mobile number"
# Taking input from user
phone_number = input("Enter a mobile number: ")
print(validate_phone_number(phone_number))
