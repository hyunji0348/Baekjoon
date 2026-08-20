import java.util.Deque;
import java.util.ArrayDeque;
import java.util.List;
import java.util.ArrayList;

class Solution {
    public List<Integer> solution(int[] progresses, int[] speeds) {
        List<Integer> answer = new ArrayList<>();

        int i = 0; 
        while(i < progresses.length){
            // 1. 맨 앞에거만 100됐는지 계속 확인
            if (progresses[i] >= 100){
                // 100됐으면 뒤에거 100미만인 녀석까지 방 빼고 개수 기록해서 answer에 추가
                int count = 0;
                while (i < progresses.length && progresses[i] >= 100){
                    i++; count++;
                }
                answer.add(count);
            }else { 
                // 100이하면 speeds대로 각 요소 더하기
                for (int j = i; j < progresses.length; j++){
                    progresses[j] += speeds[j];
                }
            }
        }
        
        return answer;
    }
}