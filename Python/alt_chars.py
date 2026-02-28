def alternate_chars(text, index=0):
    if index >= len(text):
        return ""
    return text[index] + alternate_chars(text, index + 2)


line = input("\nEnter a line of text: ")
print("\nAlternate characters:", alternate_chars(line))
