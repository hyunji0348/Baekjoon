import java.util.Scanner;
import java.util.Stack;

// 키포인트: 스택을 사용해 '열려있는' 막대의 개수를 파악
public class Main {
    public static void main(String[] args){
        Stack<Character> stack = new Stack<>();
        Scanner scanner = new Scanner(System.in);
        String S = scanner.nextLine();
        
        int totalNum = 0; // 전체 잘린 막대의 수
        int stickNum = 0; // 현재 열려있는(절단될 수 있는) 막대의 수
        
        for(int i =0; i< S.length(); i++) {
            if(S.charAt(i) == '('){
                if(S.charAt(i+1) == ')') {    // 레이저 +()는 무조건 짝을 이루니 i+1한다고 index에러 안 남
                    totalNum += stickNum;
                    i++; // 레이저 닫힘')'는 넘어감
                }
                else {                      // 나무막대
                    totalNum++;
                    stickNum++;
                }
            }else { // )인 경우 (나무막대 끝남)
                stickNum--;
            }
        }

        System.out.print(totalNum);
    }
}
