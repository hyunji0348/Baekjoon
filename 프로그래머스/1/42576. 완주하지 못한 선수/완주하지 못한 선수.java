import java.util.HashMap;
import java.util.Map;

class Solution {
    public String solution(String[] participant, String[] completion) {
        String answer = "";
        Map<String, Integer> map = new HashMap<>();
        
        for (String name : participant){
            map.put(name, map.getOrDefault(name, 0) +1);
        }
        for (String name : completion){
            map.put(name, map.get(name) -1);
        }
//         for (Map.Entry<String, Integer> entry : map.entrySet()){
//             if (entry.getValue() > 0)
//                 answer = entry.getKey();
//         }
        for (String key : map.keySet()){
            if (map.get(key) > 0){
                answer = key;
            }
        }
        
        return answer;
    }
}
// 해시값으로 participant 돌면서 추가, completion으로 돌면서 -1,
// value값이 0 이상인거가 답.(마이너스거나 양수인 키가 2개 이상이면 오류)

