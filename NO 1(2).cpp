#include <iostream>
using namespace std;

float luasPermukaan(float sisi) {
    return 6 * sisi * sisi;
}

int main() {
    float sisi;

    cout << "Masukkan panjang sisi kubus: ";
    cin >> sisi;

    float luas = luasPermukaan(sisi);

    cout << "Luas permukaan kubus adalah: " << luas << endl;

    return 0;
}
