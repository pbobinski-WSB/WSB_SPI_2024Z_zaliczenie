#include <iostream>
#include <string>
using namespace std;

int main() {
    string imie, nazwisko;
    int numerAlbumu;

    // Pobieranie danych od użytkownika
    cout << "Podaj swoje imię: ";
    getline(cin, imie); // Użycie getline dla obsługi spacji

    cout << "Podaj swoje nazwisko: ";
    getline(cin, nazwisko);

    cout << "Podaj numer albumu: ";
    cin >> numerAlbumu;

    // Wyświetlenie danych
    cout << "\nDane wprowadzone przez użytkownika:\n";
    cout << "Imię: " << imie << endl;
    cout << "Nazwisko: " << nazwisko << endl;
    cout << "Numer albumu: " << numerAlbumu << endl;

    return 0;
}
