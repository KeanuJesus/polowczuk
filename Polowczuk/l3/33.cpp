#include <iostream>
#include <cmath>

using namespace std;

float PoleTrojkata(float Ax, float Ay, float Bx, float By, float Cx, float Cy) {
    float det = (Bx - Ax) * (Cy - Ay) - (By - Ay) * (Cx - Ax);

    return 0.5f * std::abs(det);
}

int main() {
    float x1, y1, x2, y2, x3, y3;

    cout << "Podaj wspolrzedne punktu A (x y): ";
    cin >> x1 >> y1;

    cout << "Podaj wspolrzedne punktu B (x y): ";
    cin >> x2 >> y2;

    cout << "Podaj wspolrzedne punktu C (x y): ";
    cin >> x3 >> y3;

    float pole = PoleTrojkata(x1, y1, x2, y2, x3, y3);

    cout << "\nPole trojkata wynosi: " << pole << endl;

    return 0;
}
