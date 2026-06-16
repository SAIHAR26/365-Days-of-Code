import java.util.Scanner;
public class Palindrome {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a number: ");
        int num = sc.nextInt();
        int orgnum = num;
        int revnum = 0;
        int rev = 0;
        while (num > 0) {
            rev = num % 10;
            revnum = revnum * 10 + rev;
            num = num / 10;
        }
        if (orgnum == revnum) {
            System.out.println("The number is a palindrome");
        } else {
            System.out.println("The number is not a palindrome");
        }
        sc.close();
    }
}