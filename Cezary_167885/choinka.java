import java.util.Scanner;

public class choinka {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Podaj wysokość choinki (n > 0): ");
        int n = scanner.nextInt();

        if (n > 0) {
            for (int i = 0; i < n; i++) {

                for (int j = 0; j < n - i - 1; j++) {
                    System.out.print(" ");
                }
                
                /*for (int k = 0; k < 2 * i + 1; k++) {
                    System.out.print("*");
                }
                System.out.println();
                */
            }
        } else {
            System.out.println("Podana liczba musi być większa od 0!");
        }
    }
}
