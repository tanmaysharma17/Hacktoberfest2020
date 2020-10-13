# reverse the number

def reverseNumber(n):
  reverse = 0
  while n > 0:
    reverse = int(str(n)[::-1])  
    return reverse
 
print (reverseNumber(1565))
