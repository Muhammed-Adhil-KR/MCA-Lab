def validate_password(pwd):
    if len(pwd) < 8:
        return "\nInvalid password: must be at least 8 characters long.\n"

    has_lower = False
    has_upper = False
    has_digit = False
    has_special = False

    specials = "@#$!"

    for ch in pwd:
        if ch.islower():
            has_lower = True
        elif ch.isupper():
            has_upper = True
        elif ch.isdigit():
            has_digit = True
        elif ch in specials:
            has_special = True

    if all([has_lower, has_upper, has_digit, has_special]):
        return "\nValid Password!\n"
    else:
        return "\nInvalid Password!\n"
password = input("\nEnter a password: ")
print(validate_password(password))
