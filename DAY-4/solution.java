import java.util.Scanner;
public class solution {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the number of terms: ");
        int term = sc.nextInt();
        int a = 0, b = 1, nextTerm;
        System.out.print("Fibonacci Sequence: ");
        for (int i = 1; i <= term; i++) {
            System.out.print(a + " ");
            nextTerm = a + b;
            a = b;
            b = nextTerm;
        }
        sc.close();
    }
}