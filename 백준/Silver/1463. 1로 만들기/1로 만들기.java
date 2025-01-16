import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int x = sc.nextInt();

        int[] dp = new int[x+1];
        dp[1] = 0;

        for(int i = 2; i <= x; i++) {
            dp[i] = dp[i-1] + 1; // -1은 무조건 가능하니까 if문 없음

            if (i % 3 == 0) {
                dp[i] = Math.min(dp[i], dp[i / 3] + 1);  // -1이랑 /3이랑 횟수 비교
            }

            if (i % 2 == 0) {
                dp[i] = Math.min(dp[i], dp[i / 2] + 1);  // 결국 -1, /2, /3 셋 다 해보고 비교하게됨
            }
        }
        System.out.print(dp[x]);
    }
}

