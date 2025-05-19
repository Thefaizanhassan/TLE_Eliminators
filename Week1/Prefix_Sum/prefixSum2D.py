n = int(input("Enter the rows of matrix: "))
m = int(input("Enter the columns of matrix: "))

arr = [[0 for _ in range(m)] for _ in range(n)]

for i in range(n):
    for j in range(m):
        arr[i][j] = int(input(f"Enter the ({i}, {j}) th element: "))

print(arr)
