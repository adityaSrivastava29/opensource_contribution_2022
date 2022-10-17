import java.util.Scanner;
public class Traiangle2 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("enter the value of n:- ");
        int n= sc.nextInt();
        ////////// uper patternn  //////////
        for (int i=n; i>=1; i--)
        {
            for (int j=1; j<=i; j++) {
                System.out.print("*  ");
            }
            System.out.println();
        }
       //////////// lower pattern //////////
        for (int i=2; i<=n; i++) {
            for (int j = 1; j <= i; j++) {
                System.out.print("*  ");
            }
            System.out.println();
        }
    }
}
