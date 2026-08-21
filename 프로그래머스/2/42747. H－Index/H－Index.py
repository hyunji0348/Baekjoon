def solution(citations):
    answer = 0
            
    # 역정렬 때리고
    # for문 돌리면서 현재 값보다 idx+1값이 같거나 커지는 순간 -> 해당 값이 h
    citations.sort(reverse = True)
    for idx, citation in enumerate(citations, start = 1):
        if citation >= idx and len(citations)-idx <= citation: # 겹치는 숫자 처리 필요
            answer = idx
    
    return answer

