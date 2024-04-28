#include <iostream>
using namespace std;

int main() {
    int n = 10;
    int data[n] = {3, 5, 14, 9, 2, 17, 25, 4, 1, 12};
    int cari = 12;
    bool ketemu = false;
    int i;

    // Algoritma Sequential Search
    for (i = 0; i < n; i++) {
        if (data[i] == cari) {
            ketemu = true;
            break;
        }
    }

    cout << "\t Program Sequential Search Sederhana\n" << endl;
    cout << " Data: {3, 5, 14, 9, 2, 17, 25, 4, 1, 12}" << endl;
    
    if (ketemu) {
        cout << "\n Angka " << cari << " ditemukan pada indeks ke-" << i << endl;
    } else {
        cout << cari << " tidak dapat ditemukan pada data." << endl;
    }

    return 0;
}

