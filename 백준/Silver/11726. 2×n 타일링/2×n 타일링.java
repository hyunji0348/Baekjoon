import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();

        int[] dp = new int[1001];
        dp[1] = 1;
        dp[2] = 2;

        for(int i = 3; i <= n; i++) {
            dp[i] =  (dp[i-1] + dp[i-2]) % 10007; // 계단에서 1칸 올라온 경우와 2칸 올라오기까지의 경우의 수를 모두 더함 = 총 경우의 수
        }
        System.out.print(dp[n]);
    }
}

