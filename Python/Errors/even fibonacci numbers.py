#code for even fibonacci numbers
#find and correct the error in the code

n=int(input("Please Enter The No. Of Terms\n"))
#take firstnumber as 0
firstNumber=0
secondNumber=1
sum=1
eventerms=[]
evenSum=0
while True:
    if(sum<n):
        
      if(sum%2==0):
          eventerms.append(sum)
          evenSum=evenSum+sum
      sum=firstNumber+secondNumber
      firstNumber=secondNumber
      secondNumber=sum
      n+=1
    else:
      break
    
print("Even terms Of Fibonacci\n",eventerms)  
print("Sum of Even Terms\n",evenSum)
