
import java.util.ArrayList;
import java.util.List;

public class Reader {
    String name;
    String surname;
    List<Book> hireBooks = new ArrayList<>();

    public void checkout(Book book){
        hireBooks.add(book);
    }

    public Reader(String name, String surname) {
        this.name = name;
        this.surname = surname;
    }
}

