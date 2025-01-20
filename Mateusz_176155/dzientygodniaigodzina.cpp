#include <iostream>
#include <ctime>

using namespace std;

int main() {
    time_t t = time(nullptr);
    tm tm_info;
    localtime_s(&tm_info, &t);
    const char* dniTygodnia[] = {"Niedziela", "Poniedziałek", "Wtorek", "Środa", "Czwartek", "Piątek", "Sobota"};
    cout << "Dzisiaj jest: " << dniTygodnia[tm_info.tm_wday] << endl;
    cout << "Aktualna godzina: " << tm_info.tm_hour << ":"
         << tm_info.tm_min << ":" << tm_info.tm_sec << endl;
    return 0;
}
