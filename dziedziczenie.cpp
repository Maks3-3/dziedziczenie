#include <iostream>
#include <string>

using namespace std;

// 1. Klasa bazowa
class Pojazd {
public:
    string marka;
    int rokProdukcji;

    // Konstruktor ustawiający podstawowe dane
    Pojazd(string m, int r) : marka(m), rokProdukcji(r) {}

    // Metoda (zachowanie), którą będą miały wszystkie pojazdy
    void uruchomSilnik() {
        cout << "Silnik pojazdu marki " << marka << " (z " << rokProdukcji << " roku)" << endl;
    }
};

// 2. Klasa pochodna 
// Zapis "public Pojazd" oznacza: "Samochod dziedziczy z Pojazdu"
class Samochod : public Pojazd {
public:
    int liczbaDrzwi;

    // Konstruktor samochodu musi też wywołać konstruktor rodzica (Pojazdu)
    Samochod(string m, int r, int drzwi) : Pojazd(m, r), liczbaDrzwi(drzwi) {}

    // Unikalna metoda tylko dla samochodów
    void otworzBagaznik() {
        cout << "Otwieram bagaznik w moim " << liczbaDrzwi << "-drzwiowym samochodzie." << endl;
    }
};

// 3. Druga klasa pochodna
class Motocykl : public Pojazd {
public:
    bool maWozekBoczny;

    Motocykl(string m, int r, bool wozek) : Pojazd(m, r), maWozekBoczny(wozek) {}

    // Unikalna metoda tylko dla motocykli
    void zrobWheelie() {
        cout << "Motocykl " << marka << " robi wheelie" << endl;
    }
};

int main() {
    // Tworzymy konkretny samochód
    Samochod mojeAuto("Toyota", 2022, 5);
    
    // Używamy metody dziedziczonej z klasy Pojazd (kod nie został napisany w Samochodzie)
    mojeAuto.uruchomSilnik(); 
    // Używamy metody specyficznej dla Samochodu
    mojeAuto.otworzBagaznik();

    cout << "-------------------" << endl;

    // Tworzymy konkretny motocykl
    Motocykl mojMotor("Yamaha", 2020, false);
    
    // Motocykl również korzysta z dziedziczonej metody
    mojMotor.uruchomSilnik(); 
    // I ze swojej własnej
    mojMotor.zrobWheelie();

    return 0;
}
