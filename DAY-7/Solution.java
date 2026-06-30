import java.util.Scanner;

public class Solution {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        System.out.print("Enter two numbers: ");
        int a = sc.nextInt();
        int b = sc.nextInt();

        int min;
        int gcd = 1;
        int lcm;

        if (a < b)
            min = a;
        else
            min = b;

        for (int i = 1; i <= min; i++) {
            if (a % i == 0 && b % i == 0) {
                gcd = i;
            }
        }

        lcm = (a * b) / gcd;

        System.out.println("LCM = " + lcm);

        sc.close();
    }
}