# Write a Python function to to determine if a number is a perfect number.
"""
Perfect number number that is half the sum of all of its positive divisors
(including itself).

for example : if the number is 6:

1 is divisible by 6
2 is divisible by 6
3 is divisible by 6
4 is not divisible by 6

even 1+2+3=6 which is also divisible by 6

"""
def perfect_number(n):
           a=n
           sum=0
           for i in range(1,n+1):
                      if a%i==0:
                         sum=sum+i
           if sum/2==a:
              return (str(a)+"is perfect")
           else:
              return (str(a)+"is not perfect")
           
           
print (perfect_number(6))
print (perfect_number(18))

string="string_like_this"
print string.title()
