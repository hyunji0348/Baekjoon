import java.io.IOException;
import java.util.Arrays;
import java.util.Scanner;

public class Main {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        int[] price = new int[n+1];

        for(int i =1; i < n+1 ;i++){
            price[i] = sc.nextInt();
        }

        int[] memo = new int[n+1];
        memo[0] = 0;
        memo[1] = price[1];

        // 동적계획법으로 각 배열의 인덱스에 i개만 살 때의 최대값 넣기
        for(int i =2; i <= n ;i++){
            for(int j =1; j <= i ;j++) {
                memo[i] = Math.max(memo[i], memo[i - j] + price[j]);
            }
        }

        System.out.print(memo[n]);
    }
}
