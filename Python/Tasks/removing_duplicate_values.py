"""
With a given list [12,24,35,24,88,120,155,88,120,155],
write a program to print this list after removing all duplicate
values with original order reserved.
"""

def remove_duplicates(list_of_numbers: list):
    return list(dict.fromkeys(list_of_numbers))    

list_of_numbers =[12,24,35,24,88,120,155,88,120,155]
print(remove_duplicates(list_of_numbers))
