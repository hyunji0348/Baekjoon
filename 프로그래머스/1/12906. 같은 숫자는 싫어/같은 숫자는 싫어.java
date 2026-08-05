import java.util.*;

public class Solution {
    public int[] solution(int []arr) {
        ArrayList<Integer> list = new ArrayList<>();
        
        // a = -1로 설정
        // for문 돌면서 다음 값이 a와 다르면 answer에 추가
        // 같으면 그냥 인덱스 +1
        int a = -1;
        for (int i = 0; i<arr.length ;i++)
            if (arr[i] != a){
                list.add(arr[i]);
                a = arr[i];
            }
                
        int[] answer = new int[list.size()];
        for (int i = 0; i<list.size(); i++){
            answer[i] = list.get(i);
        }
        
        
        return answer;
    }
}