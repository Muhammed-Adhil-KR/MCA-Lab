word=input("Enter words: ").split(',')
word.sort(key=len)
print("longest word: ",word[-1])