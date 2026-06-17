import java.util.Scanner;
public class solution {
    public static void main(String[] args){
        Scanner sc= new Scanner(System.in);
        System.out.println("enter the number");
        int num=sc.nextInt();
        int orgnum=num;
        int sum=0;
        while(orgnum !=0){
            int rem=orgnum %10;
            sum += rem*rem*rem;
            orgnum /=10;
        }
        if(sum == num){
            System.out.println(num+" is an amstrong number");
        }
        else{
            System.out.println(num+" is not an amstrong number");
        }
        sc.close();
    }
}