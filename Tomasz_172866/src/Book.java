

public class Book {
    String title;
    String author;
    int pages;
    String genre;

    public Book(String title, String author, int pages, String genre) {
        this.title = title;
        this.author = author;
        this.pages = pages;
        this.genre = genre;
    }

    @java.lang.Override
    public java.lang.String toString() {
        return "Book{" +
                "title='" + title + '\'' +
                ", author='" + author + '\'' +
                ", pages=" + pages +
                ", genre='" + genre + '\'' +
                '}';
    }
}
