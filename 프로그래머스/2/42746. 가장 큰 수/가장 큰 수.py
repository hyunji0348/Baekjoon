def solution(numbers):
    numbers = list(map(str, numbers))
    numbers.sort(key=lambda x: x*3, reverse=True)
    
    answer = "".join(numbers)
    
    if answer[0] == '0':   # 문자열 그대로 확인, 변환 없음
        answer = '0'
    
    return answer