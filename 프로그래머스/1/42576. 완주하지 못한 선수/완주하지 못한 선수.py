def solution(participant, completion):
    answer = ''
    # participant으로 값 0으로 통일한 해시만들기(키값 같으면 +1+1)
    # completion돌며 존재하는 값 찾아서 -1
    # for문으로 해시 돌며 찾으면 0 아닌값 찾기
    dict = {}
    
    for i in participant:
        if i not in dict:
            dict[i] = 0
        dict[i] += 1
        
    for i in completion:
        dict[i] -= 1    
        
    for key, values in dict.items():
        if values != 0:
            return key
    return answer