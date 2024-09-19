#include <iostream>

using namespace std;

// Funkcja obliczaj¹ca silniê liczby
int factorial(int n) {
    if (n <= 1) return 1;
    return n * factorial(n - 1);
}

int main() {
    int wyjscie;
    do {
        cout << endl;
        cout << "MENU" << endl;
        cout << "Podaj numer czynnosci, ktora chcesz wykonac" << endl;
        cout << "1. Oblicz silnie liczby" << endl;
        cout << "0. Wyjscie" << endl;
        cin >> wyjscie;

        if (wyjscie == 1) {
            int liczba;
            cout << "Podaj liczbe calkowita: ";
            cin >> liczba;
            cout << "Silnia z " << liczba << " wynosi " << factorial(liczba) << endl;
        }

    } while(wyjscie != 0);

    return 0;
}
