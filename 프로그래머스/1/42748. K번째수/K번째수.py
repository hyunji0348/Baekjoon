def solution(array, commands):
    answer = []
    # for문 commands 순환
        # 슬라이싱
        # 정렬
        # 해당 위치 찾아서 answer에 append 
        
    for command in commands:
        sliced_array = array[command[0]-1:command[1]]
        sliced_array.sort()
        answer.append(sliced_array[command[2]-1])
    return answer
