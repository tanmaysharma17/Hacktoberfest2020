# program to find substring in string

def isSubstring(s,s1):
    a = len(s)
    b = len(s1)
    if(a<b):
        return False
    if s1 in s:
        return True
    else:
        return False

print (isSubstring("anumsharma","ar"))
