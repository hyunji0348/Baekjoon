import java.util.Arrays;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int[] a = new int[9];
        int sum = 0;

        // 9명 키 입력받음
        for (int i = 0; i < a.length; i++) {
            a[i] = sc.nextInt();
            sum += a[i];
        }

        for(int i =0; i < a.length-1; i++){ // i는 a[7]까지만 돔(a[8]이 마지막)
            for(int j =i+1; j < a.length; j++){
                if(sum - a[i] - a[j] == 100){
                    a[i] = 0;
                    a[j] = 0;
                    Arrays.sort(a);
                    for(int k = 2; k < a.length; k++) { // a[0], a[1]은 0
                        System.out.println(a[k]);
                    }
                    return;
                 }
            }
        }

    }
}

