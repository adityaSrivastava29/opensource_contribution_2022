import java.util.Scanner;

public class ZerosAndOnes {
	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);

		System.out.print("Enter the size of Row: ");
		int row = scan.nextInt();

		for (int i = 1; i <= row; i++) {
			for (int j = 1; j <= i; j++) {
					System.out.print( (j%2 == 0));
			}
			System.out.println();
		}
	}
}
