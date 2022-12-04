que = [0] * 20
front = 0
rear = 0
arr = [0] * 20
ajmat = [[0 for i in range(20)] for j in range(20)]
b = []
p = 0

def display():
    print("BFS of Graph: ")
    for i in range(n):
        print(arr[i])

def insert(val):
    global front
    que[front] = val
    front += 1

def Del():
    global rear
    rear += 1
    return que[rear-1]

def unVisit(val):
    for i in range(front):
        if(val==que[i]):
            return 0

    return 1

def bfs(i):
    global p
    j = 0
    if(front==0):
        insert(b[i])
    for j in range(n):
        if(ajmat[i][j]=='Y'):
            if(unVisit(b[j])):
                insert(b[j])
    m = Del()
    arr[p] = m
    p += 1
    return 0
if __name__ == "__main__":
    n = int(input("Enter the number of nodes in a graph: "))
    for i in range(n):
        b1 = input("Enter vlaue for node "+str(i+1)+" :")
        b.append(b1)
    print("Enter the value in adjancency matrix in from of 'Y' or 'N'\n")
    print("If there exits an edge between two vertices than 'Y' otherwise 'N'\n")
    for i in range(n):
        print("\n")
        print(b[i])
        for j in range(n):
            v = input()
            ajmat[i][j] = v

    print("\n\n")
    for i in range(n):
        bfs(i)
    display()

    
        
