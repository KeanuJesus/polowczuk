#include <iostream>
#include <cmath>
using namespace std;
struct Punkt {
    double x;
    double y;
};
struct Trojkat {
    Punkt A;
    Punkt B;
    Punkt C;
};
bool CzyLezaNaProstej(Punkt A, Punkt B, Punkt C) {
    double wyznacznik =
        A.x * (B.y - C.y) +
        B.x * (C.y - A.y) +
        C.x * (A.y - B.y);
    return wyznacznik == 0;
}
int main() {
    Trojkat t;
    cout << "Podaj wsp A (x SPACE y): ";
    cin >> t.A.x >> t.A.y;
    cout << "Podaj wsp B (x SPACE y): ";
    cin >> t.B.x >> t.B.y;
    cout << "Podaj wsp C (x SPACE y): ";
    cin >> t.C.x >> t.C.y;
    if (CzyLezaNaProstej(t.A, t.B, t.C))
        cout << "Punkty leza na jednej prostej.\n";
    else
        cout << "Punkty NIE leza na jednej prostej.\n";
    return 0;
}
