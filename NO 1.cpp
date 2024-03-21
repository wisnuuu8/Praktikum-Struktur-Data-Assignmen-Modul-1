#include <iostream>
using namespace std;

float luasPermukaan(float alas, float tinggi, float sisi) {
    return 2 * (alas * tinggi + alas * sisi + tinggi * sisi);
}

int main() {
    float alas, tinggi, sisi;

    cout << "Masukkan panjang alas jajar genjang: ";
    cin >> alas;
    cout << "Masukkan tinggi jajar genjang: ";
    cin >> tinggi;
    cout << "Masukkan panjang sisi jajar genjang: ";
    cin >> sisi;

    float luas = luasPermukaan(alas, tinggi, sisi);

    cout << "Luas permukaan jajar genjang adalah: " << luas << endl;

    return 0;
}

