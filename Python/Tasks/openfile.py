# write file

print ("type the filename")

filename= input("filename please")
f = open(filename,'r+')

print(f.readline())
print(f.readline())
print(f.readline())
line1= raw_input("line 1...")
line2=raw_input("line2 ...")
line3=raw_input("line3....")


# write on file

f.write(line1)
f.write("\n")
                
f.write(line2)
f.write("\n")
                
f.write(line3)
f.write("\n")

# close the file

f.close()
