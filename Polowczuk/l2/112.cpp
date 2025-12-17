#include <iostream>
#include <cmath>

using namespace std;

int main() {
    float a, b, c;

    cout << "--- ROZWIAZYWANIE ROWNANIA ax^2 + bx + c = 0 ---" << endl;

    cout << "Podaj wspolczynnik a: ";
    cin >> a;

    cout << "Podaj wspolczynnik b: ";
    cin >> b;

    cout << "Podaj wspolczynnik c: ";
    cin >> c;

    cout << endl << "---------------- WYNIK -----------------" << endl;

    if (a == 0) {
        if (b == 0) {
            if (c == 0) {
                cout << "Rownanie tozsamosciowe." << endl;
                cout << "Nieskonczenie wiele rozwiazan (kazda liczba jest rozwiazaniem)." << endl;
            } else {
                cout << "Rownanie sprzeczne." << endl;
                cout << "Brak rozwiazan." << endl;
            }
        } else {

            float x = -c / b;
            cout << "To nie jest rownanie kwadratowe (a=0), lecz liniowe." << endl;
            cout << "Jedno miejsce zerowe: x = " << x << endl;
        }
    }
    else {
        float delta = b*b - 4*a*c;

        if (delta > 0) {
            float x1 = (-b - sqrt(delta)) / (2 * a);
            float x2 = (-b + sqrt(delta)) / (2 * a);

            cout << "Delta dodatnia (" << delta << ")." << endl;
            cout << "Dwa miejsca zerowe:" << endl;
            cout << "x1 = " << x1 << endl;
            cout << "x2 = " << x2 << endl;
        }
        else if (delta == 0) {
            float x0 = -b / (2 * a);

            cout << "Delta rowna 0." << endl;
            cout << "Jedno podwojne miejsce zerowe:" << endl;
            cout << "x0 = " << x0 << endl;
        }
        else {
            cout << "Delta ujemna (" << delta << ")." << endl;
            cout << "Brak rozwiazan w zbiorze liczb rzeczywistych." << endl;
        }
    }

    return 0;
}
