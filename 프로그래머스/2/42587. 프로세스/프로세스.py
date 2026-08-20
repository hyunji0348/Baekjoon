from collections import deque

def solution(priorities, location):
    queue = deque()
    answer = 0
    # 정답 프로세스의 위치 계속 추적해야함
    for idx, priority in enumerate(priorities):
        queue.append((idx, priority))
        
    m = max(priorities)

    # while문으로 pop의 idx == location이면 종료
    while(1):
        # 맨앞의 원소의 우선순위가 max값과 같으면 디큐
        if (queue[0][1] == m):
            answer += 1
            
            if (queue.popleft()[0] == location):
                return answer
            
            priorities_in_queue = []
            for i in queue:
                priorities_in_queue.append(i[1])
            m = max(priorities_in_queue)
        # 작으면 (니차례아님)
        # 디큐해서 맨뒤로
        else:
            queue.rotate(-1)
            
    return answer