import java.util.Scanner;
public class Calculator {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int number1,number2,result;
        char operator;

        System.out.println("Choose an operator: +, -, *, /");
        operator = input.next().charAt(0);

        System.out.println("Insert first number:");
        number1 = input.nextInt();

        System.out.println("Insert second number:");
        number2 = input.nextInt();
        input.close();

        try {
        switch (operator) {
           case '+':
            result = number1 + number2;
            System.out.println("The result is: " + result);
            break;

           case '-':
            result = number1 - number2;
            System.out.println("The result is:" + result);
            break;

           case '*':
            result = number1 * number2;
            System.out.println("The result is: " + result);
            break;

           case '/':
            result = number1 / number2;
            System.out.println("The result is: " + result);
            break;

            default:
                System.out.println("Pls insert correct value");
                break;
            }
        }catch(ArithmeticException exception) {
            System.out.println("You can't divide by 0");

        }
    }
}
