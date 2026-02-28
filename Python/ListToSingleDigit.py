#2.Accept a list of single digit numbers as input string. Concatenate the elements of the list as a single number.

def concatenate_digits(digits):
    if not digits:
        return ''
    return str(digits[0])+concatenate_digits(digits[1:])

digits_list = list(input("Enter single digit numbers with spaces: ").split())

print("Concatenated Number:", int(concatenate_digits(digits_list)))
