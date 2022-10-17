import java.util.Scanner;
public class Triangle3 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("enter the value f n :- ");
        int n = sc.nextInt();
        ///////// uper side pattern /////////
        for(int i=1; i<=n; i++){
            for( int j=n-1;j>=i;j--){
                System.out.print("   ");
            }
            for(int k=1; k<=i; k++) {
                System.out.print(" * ");
            }
            System.out.println();
        }
        ////// lower side pattern   //////
        for(int i=n-1; i>=1; i--){
            for( int j=n-1;j>=i;j--){
                System.out.print("   ");
            }
            for(int k=1; k<=i; k++) {
                System.out.print(" * ");
            }
            System.out.println();
        }
    }
}
