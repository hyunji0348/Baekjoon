import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int k = sc.nextInt();
        int[] table = new int[n];

        for(int i = 0; i< n; i++){
            table[i] = 1; // 테이블에 사람 채우기
        }

        int count;
        int i = -1;
        int removedNum = 0;
        System.out.print("<");
        while(removedNum < n){ // removedNum이 n과 같아지면 전부 제거한 것
            count = 0;
            while(count < k){
                i++; // 다음 자리로
                if(table[i % n] == 1) {// table 배열의 인덱스는 0 ~ n-1의 범위를 계속 돌아야함
                    count++;
                }
            } // 7번 자리 제거 -> 인덱스 table[6]을 제거 i=6
            if(removedNum == n-1) {// 마지막 사람
                System.out.print((i % n)+1 + ">"); // 출력은 인덱스인 0부터가 아니라 1부터 라서 +1을 해줘야함
            }else {
                System.out.print((i % n)+1 + ", ");
            }
            table[i % n] = 0; // 해당 자리 사람 제외
            removedNum++;
        }
    }
}