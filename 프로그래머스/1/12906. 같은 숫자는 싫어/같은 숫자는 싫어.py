def solution(arr):
    answer = []
    
    # for 문 전체 순회
    # 인덱스 1부터, 전 원소와 같으면 스킵
    # 다르면 answer에 append
    answer.append(arr[0])
    for idx, i in enumerate(arr, start = 1):
        if (i != answer[-1]):
            answer.append(i)


    return answer