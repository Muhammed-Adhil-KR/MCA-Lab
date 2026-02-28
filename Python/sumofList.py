
input_list = input("Enter numbers separated by spaces: ").split()

numbers = list(map(int, input_list)) 


if len(numbers) == 0:
    print("The list is empty!")
else:
    print("List is: ",numbers)
    total = sum(numbers)
    print("Sum of the list is: ", total)
