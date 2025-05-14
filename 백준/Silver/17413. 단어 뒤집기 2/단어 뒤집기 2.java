import java.util.Scanner;
import java.util.Stack;

public class Main {
    public static void main(String[] args){
        Stack<Character> stack = new Stack<>();
        Scanner scanner = new Scanner(System.in);
        String S = scanner.nextLine();

        for(int i =0; i< S.length(); i++) {// '<'나 ' '나 S의 끝일때까지
            if(S.charAt(i) == '<'){
                while(!stack.isEmpty()) { // 모든 원소 pop()
                    System.out.print(stack.pop());
                }

                // 태그<>는 스킵
                while(S.charAt(i) != '>'){
                    System.out.print(S.charAt(i));
                    i++;
                }System.out.print('>');
                continue;
            }

            if(S.charAt(i) == ' ') {
                while(!stack.isEmpty()) { // 모든 원소 pop()
                    System.out.print(stack.pop());
                }
                System.out.print(" ");
                continue;
            }

            stack.push(S.charAt(i));
        }

        while(!stack.isEmpty()) { // 아직 남아있는 단어가 있다면(단어로 문장이 끝남) 전부 pop
            System.out.print(stack.pop());
        }
    }
}
