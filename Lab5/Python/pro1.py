coins = [10, 5, 2, 1]
taka  = 15
count = 0 

for x in coins:
    while taka >= x:
        taka -= x 
        count += 1

print(count)