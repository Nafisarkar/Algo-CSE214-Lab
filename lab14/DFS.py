stack = [0] * 20
top = -1
arr = [0] * 20
ajmat = [[0 for i in range(20)]for j in range(20)]
b = []
p = 0

def display():
    print("Dfs of graph: ")
    for i in range(n):
        print(arr[i])

def push(val):
    global top
    top += 1
    stack[top] = val

def pop():
    return stack[top]

def unvisit(val):
    for i in range(p):
        if(val == arr[i]):
            return 0

    for i in range(p+1):
        if(val == stack[top]):
            return 0
    
    return 1
def dfs(i):
    global top
    global p
    if(top==-1):
        push(b[i])
    m = pop()
    top -= 1
    arr[p] = m
    p += 1
    for j in range(n):
        if(ajmat[i][j]=='Y'):
            if(unvisit(b[j])):
                push(b[j])

    return stack[top]
if __name__ == "__main__":
    l = 0
    n = int(input("Enter the number of nodes in a graph"))
    for i in range(n):
        b1 = input("Enter the value of node "+str(i+1)+" :")
        b.append(b1)
    k  = b[0]
    print("Enter the value in adjancency matrix in from of 'Y' or 'N'\n")
    print("\nIf there is an edge between the two vertices then enter 'Y' or 'N'\n")
    for i in range(n):
        print(b[i],end=" ")
    for i in range(n):
        print("\n",b[i])
        for j in range(n):
            v = input()
            ajmat[i][j] = v
        print("\n\n")
        
    for i in range(n):
        l = 0
        while(k!=b[l]):
            l += 1
        k = dfs(l)
        
    display()
