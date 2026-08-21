def solution(prices):
    answer = [0] * len(prices)
    stack = []
    
    # for문 순회
        # if 비어있거나 새로운 값이 peek 값보다 같거나 크면:
        # else: # 작은애 들어와서(값 하락) 스택 빼야함
        #     while(peek의 값이 새로운애 값보다 클때):
        #         answer[peek의 idx] = 새로운애 idx - peek의 idx 
        #         스택에서 peek pop
        #     새로운애 stack.append
    
    for idx, price in enumerate(prices): 
        # if not stack or price >= stack[-1][1]:
        #     stack.append((idx, price))
        # else: # 작은애 들어와서(값 하락) 스택 빼야함
            while(stack and price < stack[-1][1]):
                answer[stack[-1][0]] = idx - stack[-1][0]
                stack.pop()
            stack.append((idx, price))
            
            
    for idx, i in enumerate(answer):
        if i == 0:
            answer[idx] = (len(prices) - 1) - idx
    
    
    return answer