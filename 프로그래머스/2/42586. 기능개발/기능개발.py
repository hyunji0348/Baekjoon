from collections import deque

def solution(progresses, speeds):
    answer = []
    progressque = deque(progresses)
    speedque = deque(speeds)

    while progressque: # 큐가 빌 때까지
        # 각 작업에 시간 한 번씩 더함
        for idx, progress in enumerate(progressque):
            progressque[idx] += speedque[idx]
            
        # 맨 앞 작업이 끝났는지 확인
        if progressque[0] >= 100:
            cnt = 0
            # 끝난 작업수 세서 answer에 추가
            while progressque and progressque[0] >= 100:
                progressque.popleft()
                speedque.popleft()
                cnt += 1
            answer.append(cnt)
    
    return answer