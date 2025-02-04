import java.util.Arrays;
import java.util.Scanner;

public class Main {
    public static int[] stack;
    public static int size = 0;

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        sc.nextLine();

        stack = new int[N];
        String cm;

        for (int i = 0; i < N; i++) {
            cm = sc.next();

            if (cm.equals("push"))
                push(sc.nextInt());

            if (cm.equals("pop"))
                System.out.println(pop());

            if (cm.equals("size"))
                System.out.println(size());

            if (cm.equals("empty"))
                System.out.println(empty());

            if (cm.equals("top"))
                System.out.println(top());
        }
    }

    public static void push(int X){
        stack[size] = X;
        size++;
    }

    public static int pop(){
        if(empty() == 1) // 스택이 비어있음
            return -1;
        int X = stack[size-1];
        size--;
        return X;
    }

    public static int size(){
        return size;
    }

    public static int empty(){
        if(size == 0)
            return 1;
        else
            return 0;
    }

    public static int top(){
        if(empty() == 1) // 스택이 비어있음
            return -1;
        else
            return stack[size-1];
    }



}

