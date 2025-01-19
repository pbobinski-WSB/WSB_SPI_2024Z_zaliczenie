
import java.io.FileWriter;
import java.io.IOException;

public class Main {
    public static void main(String[] args) throws IOException {
        System.out.println("Welcome in library");
        Book SimpleCpp = new Book("Simple C", "Stroustup", 1234, "programing");
        Book Java9 = new Book("Java 9", "Horstmann", 500, "programing");
        Reader  reader = new Reader("Wieslaw", "Przykladowy");
        reader.checkout(SimpleCpp);
        reader.checkout(Java9);
        reader.hireBooks.stream().forEach(s -> System.out.println(s));

        FileWriter fileWriter = new FileWriter("library.txt");
        for (Book book : reader.hireBooks) {
            fileWriter.write(book.author + ";"+book.title+"\n");
        }
        fileWriter.close();

    }
}