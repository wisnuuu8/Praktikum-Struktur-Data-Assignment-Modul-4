#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

// Fungsi untuk mencari indeks huruf yang dicari dalam kalimat
int binarySearch(string kalimat, char huruf) {
    int low = 0;
    int high = kalimat.length() - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        // Jika huruf yang dicari ditemukan di tengah kalimat
        if (kalimat[mid] == huruf) {
            return mid;
        }
        // Jika huruf yang dicari berada di sebelah kiri dari tengah kalimat
        else if (kalimat[mid] > huruf) {
            high = mid - 1;
        }
        // Jika huruf yang dicari berada di sebelah kanan dari tengah kalimat
        else {
            low = mid + 1;
        }
    }

    // Jika huruf tidak ditemukan dalam kalimat
    return -1;
}

int main() {
    string kalimat;
    char huruf;

    // Meminta pengguna untuk memasukkan kalimat dan huruf yang dicari
    cout << "Masukkan sebuah kalimat: ";
    getline(cin, kalimat);
    cout << "Masukkan huruf yang ingin dicari: ";
    cin >> huruf;

    // Mengubah semua huruf dalam kalimat menjadi huruf kecil untuk mempermudah pencarian
    transform(kalimat.begin(), kalimat.end(), kalimat.begin(), ::tolower);
    huruf = tolower(huruf);

    // Mencari indeks huruf dalam kalimat menggunakan Binary Search
    int index = binarySearch(kalimat, huruf);

    // Menampilkan hasil pencarian
    if (index != -1) {
        cout << "Huruf \"" << huruf << "\" ditemukan pada indeks ke-" << index << " dari kalimat." << endl;
    } else {
        cout << "Huruf \"" << huruf << "\" tidak ditemukan dalam kalimat." << endl;
    }

    return 0;
}

