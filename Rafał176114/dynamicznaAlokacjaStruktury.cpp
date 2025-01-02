#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

// Definicja struktury
struct Punkt {
    int x;
    int y;

    // Funkcja do wyświetlania współrzędnych punktu
    void wyswietl() {
        cout << "Punkt (" << x << ", " << y << ")" << endl;
    }
};

int main() {
    // Statyczna alokacja struktury
    Punkt p1;
    p1.x = 10;
    p1.y = 20;
    cout << "Statycznie alokowany punkt: ";
    p1.wyswietl();

    // Dynamiczna alokacja struktury
    Punkt* p2 = new Punkt;
    p2->x = 30;
    p2->y = 40;
    cout << "Dynamicznie alokowany punkt: ";
    p2->wyswietl();

    // Zwolnienie pamięci
    delete p2;

    return 0;
}