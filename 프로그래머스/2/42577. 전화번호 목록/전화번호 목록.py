def solution(phone_book):
    # 1. 문자열 정렬
    phone_book.sort()

    # 2. 하나씩 비교
    for i in range(0, len(phone_book)-1):
        if phone_book[i+1].startswith(phone_book[i]):
            return False
    
    return True
