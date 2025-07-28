import re 
def validate_phone_number(phone_number):
    pattern = r"^[789]\d{9}$"
    
    if re.fullmatch(pattern,phone_number):
        return "Valid Mobile Number "
    else:
        return "Invalid Mobile Number "
phone_number = input("Enter a mobile Number: ")
print(validate_phone_number(phone_number))