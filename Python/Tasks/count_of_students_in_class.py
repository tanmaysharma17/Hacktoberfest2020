#Write a Python program to count the number of students of individual class

from collections import Counter
classes = (
    ('V', 1),
    ('VI', 1),
    ('V', 2),
    ('VI', 2),
    ('VI', 3),
    ('VII', 1),
)
#we will need a dictionary to store the repeated students of a sections' tally
classdict = {}
for c in classes:
    if not str(c[0]) in classdict:
        classdict[str(c[0])] = c[1]
    else:
        classdict[str(c[0])] += c[1]

students = Counter(classdict)
print(students)
