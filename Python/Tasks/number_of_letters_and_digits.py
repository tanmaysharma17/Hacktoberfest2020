"""
Write a program that accepts a sentence and calculate the number of letters and digits.
Suppose the following input is supplied to the program:
hello world! 123
Then, the output should be:
LETTERS 10
DIGITS 3
"""

sentence = input("Enter a sentence containing letters and digits -> ")
digit = letter = other = 0 
for character in sentence:
        if character.isdigit():
                digit=digit+1
        elif character.isalpha():
                letter=letter+1
        else:
                other=other+1
                pass
                
print(f"Number of letters: {letter}")
print(f"Number of digits: {digit}")
print(f"Number of non letter or digit characters: {other}")
print(f'\n The original sentence entered: {sentence}')
