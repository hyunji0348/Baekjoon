import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String sentence = br.readLine();
        int n = Integer.parseInt(br.readLine());

        int cursor = sentence.length(); // 커서 초기 위치 -> 문장 맨 뒤
        StringBuilder sb = new StringBuilder(sentence);

        for (int i = 0; i < n; i++) {
            StringTokenizer st = new StringTokenizer(br.readLine());
            String command = st.nextToken(); // 명령어(L, D, B, P)

            switch (command) {
                case "L":
                    if (cursor > 0)
                        cursor--;
                    break;

                case "D":
                    if (cursor < sb.length()) // 같거나 크면 이미 끝에 있는 거임
                        cursor++;
                    break;

                case "B":
                    if (cursor > 0) {
                        sb.deleteCharAt(cursor - 1);
                        cursor--;
                    }
                    break;

                case "P":
                    if (st.hasMoreTokens()) { // "P" 다음에 공백이 있고 문자열이 존재하는 경우
                        String x = st.nextToken();
                        sb.insert(cursor, x);
                        cursor++;
                    }
                    break;
            }
        }
        System.out.print(sb.toString());
    }
}
