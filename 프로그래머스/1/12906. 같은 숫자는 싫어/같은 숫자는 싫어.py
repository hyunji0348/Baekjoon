def solution(arr):
    answer = []
    
    for num in arr:
        if answer:
            if num == answer[-1]: # 같은 수가 들어옴
                continue
            
        answer.append(num)
            
    return answer