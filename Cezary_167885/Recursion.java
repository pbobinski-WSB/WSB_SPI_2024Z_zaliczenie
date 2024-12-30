import java.util.InputMismatchException;
import java.util.Scanner;
public class Recursion {
    public static void main(String[] args) {
        int number1 = inputInt("Podaj piewszą liczbę:");
        int number2 = inputInt("Podaj drugą liczbę:");
        showResult(number1, number2);
    }

    static int inputInt(String message) {
        try {
            Scanner numbers = new Scanner(System.in);
            System.out.println(message);
            return numbers.nextInt();
        }catch (InputMismatchException e){
            System.out.println("You inserted a letter, you need to insert a number");
            return inputInt(message);
        }
    }

    private static void showResult(int number1, int number2) {
        System.out.println("First number:" + number1 + "\nSecond number: " + number2);

        if (number1 > number2) {
            System.out.println(number1 + " is greater than " + number2);
        } else {
            System.out.println(number2 + " is greater than " + number1);
        }
    }
}
