#include <iostream>
#include <iomanip>
using namespace std;

// Array data yang akan dicari
int data[7] = {2, 1, 9, 3, 7, 5, 8};

// Fungsi untuk mengurutkan data menggunakan Selection Sort
void selection_sort() {
    int temp, min, i, j;
    for(i = 0; i < 7; i++) {
        min = i;
        for(j = i + 1; j < 7; j++) {
            if(data[j] < data[min]) {
                min = j;
            }
        }
        temp = data[i];
        data[i] = data[min];
        data[min] = temp;
    }
}

// Fungsi untuk melakukan pencarian menggunakan Binary Search
void binary_search(int cari) {
    int awal = 0, akhir = 6, tengah;
    bool found = false;
    
    while (awal <= akhir) {
        tengah = (awal + akhir) / 2;
        if (data[tengah] == cari) {
            found = true;
            break;
        } else if (data[tengah] < cari) {
            awal = tengah + 1;
        } else {
            akhir = tengah - 1;
        }
    }
    
    if (found) {
        cout << "\nData ditemukan pada index ke-" << tengah << endl;
    } else {
        cout << "\nData tidak ditemukan\n";
    }
}

int main() {
    cout << "\t BINARY SEARCH \n" << endl;
    
    // Menampilkan data awal sebelum diurutkan
    cout << "Data sebelum diurutkan: ";
    for (int x = 0; x < 7; x++) {
        cout << setw(3) << data[x];
    }
    cout << endl;
    
    // Mengurutkan data menggunakan Selection Sort
    selection_sort();
    
    // Menampilkan data setelah diurutkan
    cout << "Data setelah diurutkan  : ";
    for (int x = 0; x < 7; x++) {
        cout << setw(3) << data[x];
    }
    cout << endl;
    
    // Input data yang ingin dicari
    int cari;
    cout << "\nMasukkan data yang ingin Anda cari : ";
    cin >> cari;
    
    // Melakukan pencarian menggunakan Binary Search
    binary_search(cari);
    
    return 0;
}

