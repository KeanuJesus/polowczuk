#include <iostream>
#include <cmath>

using namespace std;

bool CzyLezaNaProstej(float Ax, float Ay, float Bx, float By, float Cx, float Cy) {
    float det = (Bx - Ax) * (Cy - Ay) - (By - Ay) * (Cx - Ax);

    return std::abs(det) < 1e-5f;
}

int main() {
    float x1, y1, x2, y2, x3, y3;

    cout << "Podaj wspolrzedne punktu A (x y): ";
    cin >> x1 >> y1;

    cout << "Podaj wspolrzedne punktu B (x y): ";
    cin >> x2 >> y2;

    cout << "Podaj wspolrzedne punktu C (x y): ";
    cin >> x3 >> y3;

    if (CzyLezaNaProstej(x1, y1, x2, y2, x3, y3)) {
        cout << "\nTAK -> Punkty leza na jednej prostej." << endl;
    } else {
        cout << "\nNIE -> Punkty NIE leza na jednej prostej." << endl;
    }

    return 0;
}
