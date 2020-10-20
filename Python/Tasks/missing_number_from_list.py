#program to find a missing number from a list.

def missing_number(num_list):
    maxnum =-1
    minnum = 9999
    apsum = 0
    currsum = 0
    for i in num_list:
        if(minnum>i):
            minnum = i
        if(maxnum< i):
            maxnum = i
        currsum+=i
    apsum = (int)((maxnum+minnum)/2 * (len(num_list)+1) )
   # print(maxnum,minnum,apsum,currsum,sep=" ")
    return apsum-currsum
    

print(missing_number([1,2,3,4,6,7,8]))  #5

print(missing_number([10,11,12,14,15,16,17]))  #13
