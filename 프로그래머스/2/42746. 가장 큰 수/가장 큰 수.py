def solution(numbers):
    answer = ''
    
    numbers = list(map(str, numbers))
    numbers.sort(key=lambda x: x*3, reverse=True)
    
    answer = "".join(numbers)
    
    if int(answer) <= 0:
        answer = "0"
    
    return answer

# 문자열 리스트 정렬 기준 특성 -> 문자열 원소 길이에 상관없이 무조건 앞자리부터 하나씩 크기비교
# key값(lambda함수를 적용한 값)을 기준으로 정렬(실제 원소는 변형X)