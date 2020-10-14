# The built-in filter() function operates on any iterable type (list, tuple, string, etc).

# Python Filter with Number
numbers=[1, 6, 3, 8, 4, 9]

def lessThanFive(element):
           return element < 5
x = filter(lessThanFive, numbers)

#printing the output of second filter call
for i in x:
    print (i,end =" ")  # [1, 3, 4] is the output
 

print()


a = [1,2,4,1,2,3]
s = set(a)
print (s)
def check(n):
  return n in s
x = filter(check, a)

#printing the output of second filter call
for i in x:
    print (i,end = " ")  #[1, 2, 4, 1, 2, 3] is the output


print()
"""
filter() takes two args: (fn, sequence), and returns a list.
The filter() will return all items from the list a which return True
when passed to the function check() which will check if the value
is in the set, s. Since all the numbers in the set come from the
values list, all of the original values in the list will return True.
"""

# Python Filter with String
names = ('angel', 'anushka', 'anum', '')

#  Python Filter with a Function
def startsWithA(s):
    if(len(s)==0): return False
    if((s[0]=='a') or (s[0]=='A')):
        return True
    return False
x = filter(startsWithA, names)

#printing the output of last filter call
for i in x:
    print (i) # ('angel', 'anushka', 'anum')  is the output
