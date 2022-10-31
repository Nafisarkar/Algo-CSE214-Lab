values = [10,20,30,40]
weight = [30,10,40,20]
sort_val = []

values_added = []

for i in values:
    sort_val.append(i)

sort_val.sort()
#print(sort_val)

max_carry = 50
carrying = 0
total_value = 0
count = len(values)-1

def poss(x):
    for i in range(len(values)):
        #print(i)
        if values[i] == x:
            return i
    

for i in range(len(values)):
    temp = sort_val[count]
    pos = poss(temp)
    if (carrying+weight[pos]) <= max_carry:
        carrying+=weight[pos]
        values_added.append(values[pos])
        total_value+=values[pos]
    count-=1

print(f"total wight : {carrying}")
print(f"total value : {total_value}")
print("values added: ", end=" ") 
for i in values_added:
    print(i, end=" ")
print()   