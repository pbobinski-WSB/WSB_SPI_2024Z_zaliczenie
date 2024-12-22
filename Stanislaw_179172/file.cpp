#include <iostream>
#include <cstdlib>
#include <ctime>

void sortowanieBabelkowe(int* tablica, int rozmiar) {
	for (int i = 0; i < rozmiar - 1; ++i) {
		for (int j = 0; j < rozmiar - i - 1; ++j) {
			if (tablica[j] > tablica[j + 1]) {
				int temp = tablica[j];
				tablica[j] = tablica[j + 1];
				tablica[j + 1] = temp;
			}
		}
	}
}

int sumaTablicy(const int* tablica, int rozmiar) {
	int suma = 0;
	for (int i = 0; i < rozmiar; ++i) {
		suma += tablica[i];
	}

	return suma;
}

double medianaTablicy(const int* tablica, int rozmiar) {
	if (rozmiar % 2 == 0) {
		return (tablica[rozmiar / 2 - 1] + tablica[rozmiar / 2] / 2.0);
	}
	else {
		return tablica[rozmiar / 2];
	}
}

double sredniaTablicy(const int* tablica, int rozmiar) {
	return sumaTablicy(tablica, rozmiar) / static_cast<double>(rozmiar);
}

int main(int argc, char* argv[]) {
	int rozmiar;

	if (argc > 1) {
		rozmiar = std::atoi(argv[1]);
	}
	else {
		std::cout << "Podaj rozmiar tablicy: ";
		std::cin >> rozmiar;
	}

	int* tablica = new int[rozmiar];

	std::srand(std::time(nullptr));
	for (int i = 0; i < rozmiar; ++i) {
		tablica[i] = std::rand() % 100;
	}

	std::cout << "Tablica przed sortowaniem: ";
	for (int i = 0; i < rozmiar; ++i) {
		std::cout << tablica[i] << " ";
	}
	std::cout << std::endl;

	sortowanieBabelkowe(tablica, rozmiar);

	std::cout << "Tablica po sortowaniu: ";
	for (int i = 0; i < rozmiar; ++i) {
		std::cout << tablica[i] << " ";
	}
	std::cout << std::endl;

	int suma = sumaTablicy(tablica, rozmiar);
	double srednia = sredniaTablicy(tablica, rozmiar);
	double mediana = medianaTablicy(tablica, rozmiar);

	std::cout << "Suma: " << suma << std::endl;
	std::cout << "Srednia: " << srednia << std::endl;
	std::cout << "Mediana " << mediana << std::endl;

	delete[] tablica;

	return 0;
}