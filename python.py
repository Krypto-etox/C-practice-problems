line = input("Enter line: ")
sub = input("Enter substring: ")
length = len(line)
lensub = len(sub)
start = count = 0
end = length
while True:
    pos = line.find(sub,start,end)
    if pos!=-1:
        count +=1 
        start = pos + lensub
    else: 
        break
    if start >= length:
        break

print("No. of occurence of ", sub, ":",count)


