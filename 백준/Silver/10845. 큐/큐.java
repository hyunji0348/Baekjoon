import java.util.Scanner;

public class Main {
    public static int[] queue;
    public static int tail = 0;
    public static int front = 0;

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        queue = new int[n];

        for(int i = 0; i<n; i++) {
            String cm = sc.next();

            switch(cm){
                case "push":
                    int x = sc.nextInt();
                    push(x);
                    break;

                case "pop":
                    System.out.println(pop());
                    break;

                case "size":
                    System.out.println(size());
                    break;

                case "empty":
                    System.out.println(empty());
                    break;

                case "front":
                    System.out.println(front());
                    break;

                case "back":
                    System.out.println(back());
                    break;
            }
        }
    }

    public static void push(int x) {
        queue[tail] = x;
        tail++;
    }

    public static int pop() {
        if(front >= tail) // 큐가 비어있음
            return -1;
        return queue[front++];
    }

    public static int size() {
        return tail - front;
    }

    public static int empty() {
        if(front >= tail) // 큐가 비어있음
            return 1;
        else
            return 0;
    }

    public static int front() {
        if(front >= tail) // 큐가 비어있음
            return -1;
        else
            return queue[front];
    }

    public static int back() {
        if(front >= tail) // 큐가 비어있음
            return -1;
        else
            return queue[tail-1];
    }
}