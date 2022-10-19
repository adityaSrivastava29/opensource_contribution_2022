import java.util.Scanner;

public class Diagonal {
	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);
		System.out.print("Enter the value of n:");
		
		int n = sc.nextInt();
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= n; j++) {
				if (i == j) {
					System.out.print(" * ");
				} else
					System.out.print("   ");
			}
			System.out.println();
		}
		sc.close();
	}
}
