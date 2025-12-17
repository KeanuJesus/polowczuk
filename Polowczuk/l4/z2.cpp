#include <iostream>
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
int main() {
    Trojkat t;

    cout << "Podaj wsp A (x SPACE y): ";
    cin >> t.A.x >> t.A.y;
    cout << "Podaj wsp B (x SPACE y): ";
    cin >> t.B.x >> t.B.y;
    cout << "Podaj wsp C (x SPACE y): ";
    cin >> t.C.x >> t.C.y;
    cout << "trojkat:";
    cout << "A(" << t.A.x << ", " << t.A.y << ")\n";
    cout << "B(" << t.B.x << ", " << t.B.y << ")\n";
    cout << "C(" << t.C.x << ", " << t.C.y << ")\n";
    return 0;
}
