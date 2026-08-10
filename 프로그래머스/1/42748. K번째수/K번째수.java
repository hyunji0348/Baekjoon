import java.util.List;
import java.util.ArrayList;
import java.util.Arrays;

class Solution {
    public Integer[] solution(int[] array, int[][] commands) {
        // int[] answer = {}; // 정답 배열의 길이가 정해져 있다면 그냥 배열을 쓰고 길이를 지정하는 것도괜찮
        List<Integer> list = new ArrayList<>();
        
        // for 문으로 범위안의 수들 정렬
        for (int i = 0; i < commands.length; i++){
            // 1. 배열 복사본 생성
            int[] copy = array.clone();
            
            // 2. 복사본의 특정 범위 정렬
            Arrays.sort(copy, commands[i][0] - 1, commands[i][1]);
            
             // i+k번째 수 answer 배열에 추가 
            list.add(copy[(commands[i][0] - 1) + (commands[i][2] - 1)]);
        }
        // List arr로 변환
        Integer[] answer = {};
        answer = list.toArray(new Integer[0]);        
        
        return answer;
    }
}