import java.util.Arrays;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        int E, S, M;
        E=sc.nextInt();
        S=sc.nextInt();
        M=sc.nextInt();

        while(E != S || S != M){
            if(S >= E && M >= E) // E가 최솟값
                E += 15;
            else if(S >= M && E >= M) // M이 최솟값
                M += 19;
            else
                S += 28; // S가 최솟값
        }

        System.out.println(E);

    }
}

