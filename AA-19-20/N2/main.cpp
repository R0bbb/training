#include <iostream>

using namespace std;

int main() {
    int A, B;
    cin >> A >> B;
    if (B == 0) {
        return 0;
    }
    cout << "Somma: " << A + B << endl;
    cout << "Differenza: " << A - B << endl;
    cout << "Moltiplicazione: " << A * B << endl;
    cout << "Quoziente: " << A / B << endl;
    cout << "Resto: " << A % B;
    return 0;
}