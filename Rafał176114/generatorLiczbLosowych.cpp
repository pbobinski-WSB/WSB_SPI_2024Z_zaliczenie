#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>

using namespace std;

// Funkcja do porównywania dwóch liczb (potrzebna do sortowania)
int compare(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}

// Funkcja sumująca dwie liczby
int suma(int a, int b) {
    return a + b;
}

int main(int argc, char* argv[]) {
    int n;

    // Sprawdzenie, czy podano argument wywołania programu
    if (argc > 1) {
        n = atoi(argv[1]);
    }
    else {
        // Zapytanie użytkownika o liczbę, jeśli nie podano argumentu
        cout << "Podaj liczbe calkowita: ";
        cin >> n;
    }

    // Tworzenie dynamicznej tablicy
    int* tablica = new int[n];

    // Inicjalizacja generatora liczb losowych
    srand(time(0));

    // Wypełnianie tablicy losowymi wartościami
    for (int i = 0; i < n; ++i) {
        tablica[i] = rand() % 100; // Losowe liczby od 0 do 99
    }

    // Sortowanie tablicy
    qsort(tablica, n, sizeof(int), compare);

    // Obliczanie sumy
    int suma = 0;
    for (int i = 0; i < n; ++i) {
        suma += tablica[i];
    }

    // Obliczanie średniej
    double srednia = static_cast<double>(suma) / n;

    // Obliczanie mediany
    double mediana;
    if (n % 2 == 0) {
        mediana = (tablica[n / 2 - 1] + tablica[n / 2]) / 2.0;
    }
    else {
        mediana = tablica[n / 2];
    }

    // Wyświetlanie wyników
    cout << "Tablica: ";
    for (int i = 0; i < n; ++i) {
        cout << tablica[i] << " ";
    }
    cout << endl;

    cout << "Suma: " << suma << endl;
    cout << "Srednia: " << srednia << endl;
    cout << "Mediana: " << mediana << endl;

    // Zwolnienie pamięci
    delete[] tablica;

    return 0;
