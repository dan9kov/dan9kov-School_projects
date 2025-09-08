#include <iostream>
using namespace std;

int main() {
    int a;
    cin >> a;
    int mas[a];
    for (int i = 0; i < a; i++) {
        cin >> mas[i];
    }
    int max = 0;
    int min = 110;
    for (int i = 0; i < a; i++) {
        if (mas[i] > max) {
            max = mas[i];
        }
        if (mas[i] < min) {
            min = mas[i];
        }
    }
    for (int i = 0; i < a; i++) {
        if (mas[i] == max) {
            mas[i] = min;
        }
    }
    for (int i = 0; i < a; i++) {
        cout << mas[i] << " ";
    }
    return 0;
}