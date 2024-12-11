import java.util.Scanner;
public class Temperatures {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        double degreesCelsius,fahrenheitDegrees;

        System.out.println("Insert temperature in Celsius:");
        degreesCelsius = input.nextDouble();
        input.close();

        fahrenheitDegrees = 1.8 * degreesCelsius + 32.0;

        System.out.println("After conversion Celsius degress on Fahrenheit degrees you get:" + " " + fahrenheitDegrees + " F");

    }
}
