num = int(input())

paper = [[0] * 100 for _ in range(100)]
count = 0

for _ in range(num):
    width, height = map(int, input().split()) 

    for i in range(height, height+10):
        for j in range(width, width+10):
            if paper[i][j] == 1:
                continue
            else:
               paper[i][j] = 1
               count += 1

print(count)

