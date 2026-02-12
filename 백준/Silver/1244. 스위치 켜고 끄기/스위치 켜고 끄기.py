def boy(arr, idx):
    for i in range(idx, len(arr), idx+1):
        change(arr, i)

def girl(arr, idx):
    change(arr, idx)
    i = 1

    while ((idx-i) >= 0) and ((idx+i) < len(arr)):
        if arr[idx-i] == arr[idx+i]:
            change(arr, idx-i)
            change(arr, idx+i)
            i += 1
        else:
            break

def change(arr, idx):
    if arr[idx] == 0:
        arr[idx] = 1
    else:
        arr[idx] = 0


switch_num = int(input())
switch = list(map(int, input().split()))

student_num = int(input())
for _ in range(student_num):
    gender, idx = map(int, input().split())

    if gender == 1:
        boy(switch, idx-1)
    else:
        girl(switch, idx-1)

# 출력
for i in range(0, len(switch)):
    if i % 20 == 0 and i > 0:
        print()
    print(switch[i], end = " ")
