import java.util.Scanner;
public class Butterfly {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("enter the value of n");
        int n = sc.nextInt();
        /////// uper side pattern////////
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= i; j++) {
                System.out.print(" * ");
            }
            int space = (2 * n) - (2 * i);
            for (int k = 1; k <= space; k++) {
                System.out.print("   ");
            }
            for (int j = 1; j <= i; j++) {
                System.out.print(" * ");
            }
            System.out.println();
        }
        ///// lower side pattern/////
            for (int i = n; i >= 1; i--) {
                for (int j = 1; j <= i; j++) {
                    System.out.print(" * ");
                }
                int space = (2 * n) - (2 * i);
                for (int k = 1; k <= space; k++) {
                    System.out.print("   ");
                }
                for (int j = 1; j <= i; j++) {
                    System.out.print(" * ");
                }
                System.out.println();
            }


    }
}
