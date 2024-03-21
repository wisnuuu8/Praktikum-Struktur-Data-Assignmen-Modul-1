#include <iostream>
#include <map>
using namespace std;

int main() {
    int array[5] = {1, 2, 3, 4, 5};
    cout << "Array:" << endl;
    for (int i = 0; i < 5; ++i) {
        cout << array[i] << " ";
    }
    cout << endl;

    map<int, string> myMap;
    myMap[1] = "satu";
    myMap[2] = "dua";
    myMap[3] = "tiga";
    myMap[4] = "empat";
    myMap[5] = "lima";

    cout << "\nMap:" << endl;
    for (auto it = myMap.begin(); it != myMap.end(); ++it) {
        cout << it->first << " -> " << it->second << endl;
    }

    return 0;
}
