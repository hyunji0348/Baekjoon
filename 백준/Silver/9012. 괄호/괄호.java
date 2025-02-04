import java.util.Arrays;
import java.util.Scanner;
import java.io.*;

public class Main {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        sc.nextLine();

        for(int i =0; i<n; i++){
            int num = 0; // '('의 개수
            int result = 1; // 0 -> NO , 1 -> YES
            
            String vps = sc.next();

            for(int j =0; j<vps.length(); j++){
                if(vps.charAt(j) == '(') {
                    num++;
                }else { // ')'가 나온 경우
                    num--;
                    if(num < 0) { // ')'의 개수가 더 많음
                        result = 0;
                        break;
                    }
                }
            }
            if(num != 0 || result == 0) // 배열에 '('가 남아있음
                System.out.println("NO");
            else
                System.out.println("YES");
        }
    }
}
