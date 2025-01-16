import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt(); // 테스트 케이스 개(몇 번 할건지)

        int[] dp = new int[11];
        dp[0] = 1;
        dp[1] = 1;
        dp[2] = 2;

        for(int t = 1; t <= T; t++) {
            int n = sc.nextInt(); // 1,2,3의 조합으로 표현할 정수 n
            for(int i = 3; i <= n; i++) {
                if(dp[i] != 0) // 이미 계산된 값이 있음
                    continue; // 스킵
                dp[i] = (dp[i-1] + dp[i-2] + dp[i-3]) % 10007; // 계단에서 1칸 올라온 경우와 2칸 올라오기까지의 경우의 수를 모두 더함 = 총 경우의 수
            }
            System.out.println(dp[n]); // 결과값 출력
        }
    }
}

