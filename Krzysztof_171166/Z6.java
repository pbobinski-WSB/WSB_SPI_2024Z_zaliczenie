import java.util.Scanner;

public class Z6 {
    public static void main(String[] args) {
        double income, tax, taxValue, taxfree, secondTreshold, maxft;
        secondTreshold = 120000;
        taxfree=30000;
        maxft=16200;

        Scanner input = new Scanner(System.in);
        System.out.print("Podaj kwotę dochodu: ");
        income = input.nextDouble();

        if (income <= secondTreshold) {
            tax=0.18;
            taxValue=(income-taxfree)*tax;
        } else {
            tax=0.32;
            taxValue=(income-secondTreshold)*tax+maxft;
        }

        taxValue = Math.ceil(taxValue * 100) /100;

        System.out.printf("Twój podatek wynosi: %.2f zł", (taxValue<0 ? 0 : taxValue));

    }
}
