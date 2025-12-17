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
float PoleTrojkata(Trojkat T) {
    double a, b, c, s, pole
    a = sqrt(pow(T.B.x - T.C.x, 2) + pow(T.B.y - T.C.y, 2));
    b = sqrt(pow(T.A.x - T.C.x, 2) + pow(T.A.y - T.C.y, 2));
    c = sqrt(pow(T.A.x - T.B.x, 2) + pow(T.A.y - T.B.y, 2));
    s = (a + b + c)/2;
    pole = sqrt(s*(s - a)*(s - b)*(s - c));
    return pole;
}
int main() {
    Trojkat t;
    cout << "Podaj wsp A (x SPACE y): ";
    cin >> t.A.x >> t.A.y;
    cout << "Podaj wsp B (x SPACE y): ";
    cin >> t.B.x >> t.B.y;
    cout << "Podaj wsp C (x SPACE y): ";
    cin >> t.C.x >> t.C.y;
    cout << "Pole trojkata to: " << PoleTrojkata(t) << endl;
    return 0;
}
