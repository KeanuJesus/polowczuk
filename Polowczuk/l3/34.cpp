#include <iostream>
#include <cmath>

using namespace std;


bool CzyLezaNaProstej(float Ax, float Ay, float Bx, float By, float Cx, float Cy) {
    float det = (Bx - Ax) * (Cy - Ay) - (By - Ay) * (Cx - Ax);
    return std::abs(det) < 1e-5f;
}

float PoleTrojkata(float Ax, float Ay, float Bx, float By, float Cx, float Cy) {
    float det = (Bx - Ax) * (Cy - Ay) - (By - Ay) * (Cx - Ax);
    return 0.5f * std::abs(det);
}


int main() {
    float Ax, Ay, Bx, By, Cx, Cy;
    int wybor;

    bool punktyPodane = false;
    bool sprawdzonoWspolliniowosc = false;
    bool saNaProstej = false;

    do {
        cout << "\n---------------- MENU ----------------" << endl;

        cout << "1. Podaj nowe punkty A, B, C" << endl;

        if (punktyPodane && !sprawdzonoWspolliniowosc) {
            cout << "2. Sprawdz, czy punkty leza na jednej prostej" << endl;
        }

        if (punktyPodane && sprawdzonoWspolliniowosc && !saNaProstej) {
            cout << "3. Oblicz pole trojkata" << endl;
        }

        cout << "0. Zakoncz program" << endl;
        cout << "--------------------------------------" << endl;
        cout << "Twoj wybor: ";
        cin >> wybor;

        switch (wybor) {
            case 1:
                cout << "\nPodaj wspolrzedne A (x y): "; cin >> Ax >> Ay;
                cout << "Podaj wspolrzedne B (x y): "; cin >> Bx >> By;
                cout << "Podaj wspolrzedne C (x y): "; cin >> Cx >> Cy;

                punktyPodane = true;
                sprawdzonoWspolliniowosc = false;
                saNaProstej = false;
                cout << "(Punkty zapisane w pamieci)" << endl;
                break;

            case 2:
                if (punktyPodane) {
                    saNaProstej = CzyLezaNaProstej(Ax, Ay, Bx, By, Cx, Cy);
                    sprawdzonoWspolliniowosc = true;

                    if (saNaProstej) {
                        cout << "\n>>> WYNIK: Punkty LEZA na jednej prostej." << endl;
                        cout << ">>> (Nie mozna zbudowac trojkata)." << endl;
                    } else {
                        cout << "\n>>> WYNIK: Punkty NIE leza na jednej prostej." << endl;
                        cout << ">>> (Tworza trojkat - mozesz teraz obliczyc pole)." << endl;
                    }
                } else {
                    cout << "Najpierw musisz podac punkty!" << endl;
                }
                break;

            case 3:
                if (punktyPodane && sprawdzonoWspolliniowosc && !saNaProstej) {
                    float pole = PoleTrojkata(Ax, Ay, Bx, By, Cx, Cy);
                    cout << "\n>>> WYNIK: Pole trojkata wynosi: " << pole << endl;
                } else {
                    cout << "Nieprawidlowa operacja w tym momencie." << endl;
                }
                break;

            case 0:
                cout << "Koniec programu." << endl;
                break;

            default:
                cout << "Nie ma takiej opcji." << endl;
        }

    } while (wybor != 0);

    return 0;
}
