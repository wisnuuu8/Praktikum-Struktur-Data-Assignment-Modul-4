**BAB 1**

**PENDAHULUAN**

**LATAR BELAKANG**

Algoritma pencarian adalah sekumpulan langkah yang digunakan untuk menemukan elemen tertentu dalam suatu kumpulan data. Tujuannya adalah untuk menentukan keberadaan elemen yang dicari serta posisinya jika ada. Terdapat beberapa jenis algoritma pencarian yang umum digunakan. Pencarian linear, misalnya, memeriksa setiap elemen satu per satu dalam urutan tertentu. Sebaliknya, pencarian biner hanya dapat digunakan pada data yang sudah diurutkan, dengan membagi kumpulan data menjadi dua bagian secara terus-menerus. Algoritma pencarian lainnya termasuk pencarian interpolasi, pencarian loncat, dan pencarian eksponensial, masing-masing dengan pendekatan dan keunggulan tertentu. Pemilihan algoritma pencarian yang tepat tergantung pada sifat data dan kebutuhan spesifik aplikasi yang sedang dikembangkan.

**RUMUSAN MASALAH**

Bagaimana cara efisien untuk menemukan elemen tertentu dalam sebuah kumpulan data?

**TUJUAN PRAKTIKUM**

Memahami berbagai jenis algoritma pencarian dan mampu menerapkannya secara efisien untuk menemukan elemen dalam kumpulan data.

**BAB 2**

**PEMBAHSAAN**

**DASAR TEORI**

Pencarian (Searching) merupakan langkah penting dalam pemrosesan data yang melibatkan proses menemukan nilai tertentu dalam suatu kumpulan data. Proses ini seringkali menghasilkan tiga kemungkinan: data ditemukan, lebih dari satu data ditemukan, atau data tidak ditemukan sama sekali. Untuk mengimplementasikan proses pencarian ini, terdapat dua metode utama yang umum digunakan: Sequential Search dan Binary Search. 

Sequential Search adalah metode pencarian yang sederhana, cocok digunakan untuk data yang tidak terurut. Dalam Sequential Search, setiap elemen dalam kumpulan data dibandingkan satu per satu secara berurutan, dimulai dari indeks pertama hingga terakhir. Proses pencarian akan berhenti saat elemen yang dicari ditemukan atau ketika seluruh kumpulan data telah diperiksa. Misalnya, untuk mencari sebuah angka dalam sebuah array, Sequential Search akan memeriksa setiap elemen secara berurutan hingga menemukan angka yang dicari atau sampai akhir array.

Sementara itu, Binary Search digunakan untuk kumpulan data yang sudah terurut. Metode ini membagi kumpulan data menjadi dua bagian secara logika pada setiap tahap pencarian, kemudian membandingkan elemen tengah dengan data yang dicari. Berdasarkan perbandingan tersebut, pencarian dilanjutkan pada bagian yang relevan. Binary Search memiliki keunggulan efisiensi karena jumlah elemen yang perlu diperiksa berkurang secara eksponensial setiap langkahnya. Dengan demikian, pemilihan metode pencarian yang sesuai tergantung pada sifat data yang dimiliki dan tujuan dari proses pencarian yang dilakukan.

**GUIDED**

**GUIDED 1**
1. Buatlah sebuah project dengan menggunakan sequential search 
sederhana untuk melakukan pencarian data
```C++
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
```

**BAGIAN 1**
```C++
#include <iostream>
using namespace std;
```
Interpretasi : 

#include : Ini adalah direktif preprocessor yang menginstruksikan kompiler untuk menyertakan konten dari pustaka iostream. Pustaka ini menyediakan fungsi-fungsi untuk input-output standar, seperti cin dan cout.

using namespace std;: Ini adalah deklarasi yang memberi tahu kompiler bahwa kita akan menggunakan namespace std. Namespace std adalah tempat dimana semua fungsi dan objek standar C++, seperti cin dan cout, didefinisikan.

**BAGIAN 2**
```C++
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
```
Interpretasi : 

Program tersebut adalah implementasi algoritma Sequential Search dalam bahasa C++. Algoritma ini digunakan untuk mencari nilai tertentu dalam sebuah array secara berurutan. Program menginisialisasi array `data` dengan 10 elemen yang sudah ditentukan. Kemudian, dilakukan iterasi melalui array menggunakan loop `for` untuk mencari nilai yang dicari (`cari`). Jika nilai tersebut ditemukan, variabel `ketemu` diubah menjadi `true` dan program menampilkan pesan bahwa nilai tersebut ditemukan beserta indeksnya. Jika nilai tidak ditemukan setelah iterasi selesai, program mencetak pesan bahwa nilai tersebut tidak ditemukan dalam data.

**HASIL OUTPUT**
```C++
        Program Sequential Search Sederhana

 Data: {3, 5, 14, 9, 2, 17, 25, 4, 1, 12}

 Angka 12 ditemukan pada indeks ke-9

--------------------------------
Process exited after 0.07257 seconds with return value 0
Press any key to continue . . .
```

**GUIDED 2**
2. Buatlah sebuah project untuk melakukan pencarian data dengan 
menggunakan Binary Search
```C++
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
```
**BAGIAN 1**
```C++
#include <iostream>
#include <iomanip>
using namespace std;
```
Interpretasi : 

#include <iomanip> memasukkan library iomanip yang memberikan fungsi-fungsi untuk melakukan manipulasi output. Meskipun dalam program ini belum ada penggunaan iomanip, tetapi penulisannya bisa berguna jika nantinya kita akan memformat output dalam program.


#include : Ini adalah direktif preprocessor yang menginstruksikan kompiler untuk menyertakan konten dari pustaka iostream. Pustaka ini menyediakan fungsi-fungsi untuk input-output standar, seperti cin dan cout.

using namespace std;: Ini adalah deklarasi yang memberi tahu kompiler bahwa kita akan menggunakan namespace std. Namespace std adalah tempat dimana semua fungsi dan objek standar C++, seperti cin dan cout, didefinisikan.

**BAGIAN 2**
```C++
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
```
Interpretasi : 

Code di atas merupakan implementasi algoritma Selection Sort untuk mengurutkan array `data` yang terdiri dari 7 elemen secara menaik. Algoritma ini bekerja dengan mencari elemen terkecil dalam array pada setiap iterasi dan menukarnya dengan elemen pada posisi yang sesuai. Proses ini diulang hingga seluruh array diurutkan. Setelah proses pengurutan selesai, array `data` akan berisi elemen-elemen yang diurutkan secara menaik.

**BAGIAN 3**
```C++
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
```
Interpretasi : 

Fungsi `binary_search` merupakan implementasi dari algoritma Binary Search dalam pencarian data di dalam array. Ini bekerja dengan cara membagi rentang pencarian menjadi dua bagian secara berulang sampai data yang dicari ditemukan atau rentang pencarian tidak lagi valid. Langkah-langkah utamanya adalah menghitung indeks tengah dari rentang pencarian, membandingkan nilai elemen tengah dengan nilai yang dicari, dan memperbarui rentang pencarian berdasarkan hasil perbandingan. Jika data ditemukan, fungsi mengembalikan indeks di mana data tersebut ditemukan; jika tidak, fungsi memberi tahu bahwa data tidak ditemukan.

**BAGIAN 4**
```C++
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
```
Interpretasi : 

Program di atas merupakan implementasi algoritma Binary Search dalam bahasa C++. Langkah-langkahnya adalah sebagai berikut:

1. Pendahuluan:
   Program menampilkan judul "BINARY SEARCH" di layar.

2. Menampilkan Data Awal:
   Data awal sebelum diurutkan ditampilkan di layar menggunakan loop `for`.

3. Mengurutkan Data:
   Data diurutkan menggunakan algoritma Selection Sort dengan memanggil fungsi `selection_sort()`.

4. Menampilkan Data Setelah Diurutkan:
   Data yang sudah diurutkan kemudian ditampilkan di layar.

5. Input Data yang Ingin Dicari:
   Pengguna diminta untuk memasukkan nilai yang ingin dicari dalam array yang sudah diurutkan.

6. Melakukan Pencarian Menggunakan Binary Search:
   Pencarian dilakukan menggunakan algoritma Binary Search dengan memanggil fungsi `binary_search(cari)`.

Setelah pencarian selesai, program selesai dieksekusi dan mengembalikan nilai 0 dari fungsi `main()`.

**HASIL OUTPUT**
```C++
         BINARY SEARCH

Data sebelum diurutkan:   2  1  9  3  7  5  8
Data setelah diurutkan  :   1  2  3  5  7  8  9

Masukkan data yang ingin Anda cari : 9

Data ditemukan pada index ke-6

--------------------------------
Process exited after 3.629 seconds with return value 0
Press any key to continue . . .
```

**UNGUIDED**

**UNGUIDED 1**
1. Buatlah sebuah program untuk mencari sebuah huruf pada sebuah
kalimat yang sudah di input dengan menggunakan Binary Search!
```C++
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
```
**BAGIAN 1**
```C++
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;
```
Interpretasi : 

<iostream> digunakan untuk mengakses fungsi-fungsi dasar input-output.

<string> memberikan akses ke kelas dan fungsi-fungsi yang berkaitan dengan manipulasi string.

<algorithm> memberikan akses ke fungsi-fungsi algoritma umum seperti sort(), binary_search(), dan lainnya.

**BAGIAN 2**
```C++
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
```
Interpretasi :

Fungsi `binarySearch` di atas merupakan implementasi algoritma Binary Search untuk mencari indeks dari suatu huruf dalam sebuah kalimat yang disimpan dalam bentuk string. Berikut adalah penjelasan singkat mengenai bagaimana fungsi tersebut bekerja:

1. Fungsi `binarySearch` menerima dua parameter: `kalimat` (string) yang merupakan kalimat yang akan dicari hurufnya, dan `huruf` (char) yang merupakan huruf yang akan dicari dalam kalimat tersebut.

2. Variabel `low` dan `high` digunakan untuk menandai batas-batas pencarian dalam kalimat. Pada awalnya, `low` diatur ke indeks pertama dalam kalimat (0), sedangkan `high` diatur ke indeks terakhir dalam kalimat (`kalimat.length() - 1`).

3. Selama `low` masih kurang dari atau sama dengan `high`, dilakukan pencarian dengan menggunakan loop while.

4. Di setiap iterasi, dihitung nilai `mid` sebagai indeks tengah dari rentang pencarian dengan menggunakan formula `mid = low + (high - low) / 2`.

5. Dilakukan pengecekan terhadap huruf yang berada pada indeks `mid` dalam kalimat:
   - Jika huruf yang dicari (`huruf`) sama dengan huruf yang berada di indeks `mid` dalam kalimat, maka fungsi akan mengembalikan nilai `mid`, yang merupakan indeks huruf yang dicari dalam kalimat.
   - Jika huruf yang dicari lebih kecil dari huruf yang berada di indeks `mid` dalam kalimat, maka rentang pencarian diubah menjadi setengah kiri dari `mid` dengan mengatur nilai `high = mid - 1`.
   - Jika huruf yang dicari lebih besar dari huruf yang berada di indeks `mid` dalam kalimat, maka rentang pencarian diubah menjadi setengah kanan dari `mid` dengan mengatur nilai `low = mid + 1`.

6. Proses di atas diulang sampai huruf yang dicari ditemukan atau rentang pencarian tidak dapat lagi dipersingkat (ketika `low` lebih besar dari `high`).

7. Jika huruf tidak ditemukan dalam kalimat, fungsi mengembalikan nilai `-1` sebagai tanda bahwa huruf tersebut tidak ditemukan dalam kalimat.

**BAGIAN 3**
```C++
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
```
Interpretasi : 

Program tersebut meminta pengguna untuk memasukkan sebuah kalimat dan sebuah huruf yang ingin dicari. Setelah itu, program mengubah semua huruf dalam kalimat menjadi huruf kecil dan mencari kemunculan huruf yang dicari dalam kalimat menggunakan algoritma Binary Search. Jika huruf ditemukan, program akan menampilkan indeks pertama kemunculan huruf tersebut dalam kalimat. Jika tidak ditemukan, program akan menampilkan pesan bahwa huruf tidak ditemukan.

**HASIL OUTPUT**
```C++
Masukkan sebuah kalimat: wisnu
Masukkan huruf yang ingin dicari: u
Huruf "u" ditemukan pada indeks ke-4 dari kalimat.

--------------------------------
Process exited after 3.446 seconds with return value 0
Press any key to continue . . .
```

**UNGUIDED 2**
2. Buatlah sebuah program yang dapat menghitung banyaknya huruf 
vocal dalam sebuah kalimat!
```C++
#include <iostream>
#include <string> // Tambahkan header untuk tipe data string
using namespace std;

int main() {
    string kalimat;
    cout << "Masukkan kalimat: ";
    getline(cin, kalimat);

    int countVokal = 0;
    for (int i = 0; i < kalimat.length(); ++i) {
        char karakter = tolower(kalimat[i]);
        if (karakter == 'a' || karakter == 'e' || karakter == 'i' || karakter == 'o' || karakter == 'u') {
            countVokal++;
        }
    }

    cout << "Jumlah huruf vokal dalam kalimat tersebut adalah: " << countVokal << endl;

    return 0;
}
```
**BAGIAN 1**
```C++
#include <iostream>
#include <string> // Tambahkan header untuk tipe data string
using namespace std;
```
Interpretasi : 

<iostream> digunakan untuk mengakses fungsi-fungsi dasar input-output.

<string> memberikan akses ke kelas dan fungsi-fungsi yang berkaitan dengan manipulasi string.

**BAGIAN 2**
```C++
int main() {
    string kalimat;
    cout << "Masukkan kalimat: ";
    getline(cin, kalimat);

    int countVokal = 0;
    for (int i = 0; i < kalimat.length(); ++i) {
        char karakter = tolower(kalimat[i]);
        if (karakter == 'a' || karakter == 'e' || karakter == 'i' || karakter == 'o' || karakter == 'u') {
            countVokal++;
        }
    }

    cout << "Jumlah huruf vokal dalam kalimat tersebut adalah: " << countVokal << endl;

    return 0;
}
```
Interpretasi :

Program tersebut meminta pengguna untuk memasukkan sebuah kalimat. Setelah pengguna memasukkan kalimat, program akan menghitung jumlah huruf vokal dalam kalimat tersebut. Proses penghitungan dilakukan dengan mengubah setiap karakter dalam kalimat menjadi huruf kecil dan memeriksa apakah karakter tersebut merupakan huruf vokal ('a', 'e', 'i', 'o', 'u'). Jika ya, maka jumlah huruf vokal akan bertambah satu. Setelah selesai mengiterasi seluruh karakter dalam kalimat, program akan menampilkan jumlah huruf vokal yang terhitung kepada pengguna.

**HASIL OUTPUT**
```C++
Masukkan kalimat: aku seorang mahasiswa
Jumlah huruf vokal dalam kalimat tersebut adalah: 9

--------------------------------
Process exited after 12.67 seconds with return value 0
Press any key to continue . . .
```

**UNGUIDED 3**
3. Diketahui data = 9, 4, 1, 4, 7, 10, 5, 4, 12, 4. Hitunglah berapa banyak 
angka 4 dengan menggunakan algoritma Sequential Search!
```C++
#include <iostream>
using namespace std;

int sequentialSearch(int arr[], int n, int key) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            count++;
        }
    }
    return count;
}

int main() {
    int data[] = {9, 4, 1, 4, 7, 10, 5, 4, 12, 4};
    int key = 4;
    int n = sizeof(data) / sizeof(data[0]);

    int occurrences = sequentialSearch(data, n, key);

    cout << "Banyaknya angka 4 dalam data adalah: " << occurrences << endl;

    return 0;
}
```
**BAGIAN 1**
```C++
#include <iostream>
using namespace std;
```
Interpretasi :

<iostream> digunakan untuk mengakses fungsi-fungsi dasar input-output.

**BAGIAN 2**
```C++
int sequentialSearch(int arr[], int n, int key) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            count++;
        }
    }
    return count;
}
```
Interpretasi :

Fungsi `sequentialSearch` adalah sebuah fungsi dalam C++ yang menerima array, panjang array, dan angka yang ingin dicari. Fungsi ini menghitung berapa kali angka tersebut muncul dalam array dengan melakukan pencarian berurutan dan mengembalikan jumlah kemunculannya. Selama perulangan, setiap elemen dalam array dibandingkan dengan angka yang dicari, dan jika cocok, jumlah kemunculan akan bertambah. Fungsi ini tidak mengubah isi array, hanya melakukan pencarian dan penghitungan.

**BAGIAN 3**
```C++
int main() {
    int data[] = {9, 4, 1, 4, 7, 10, 5, 4, 12, 4};
    int key = 4;
    int n = sizeof(data) / sizeof(data[0]);

    int occurrences = sequentialSearch(data, n, key);

    cout << "Banyaknya angka 4 dalam data adalah: " << occurrences << endl;

    return 0;
}
```
Interpretasi :

Program di atas menghitung berapa banyak angka 4 yang terdapat dalam array `data` menggunakan algoritma Sequential Search. Pertama, array `data` yang berisi serangkaian angka diinisialisasi. Kemudian, variabel `key` didefinisikan untuk menyimpan angka yang ingin dicari, dalam hal ini angka 4. Variabel `n` dihitung untuk menentukan panjang array `data`.

Selanjutnya, fungsi `sequentialSearch` dipanggil dengan parameter array `data`, panjang array `n`, dan nilai `key` yang ingin dicari. Fungsi `sequentialSearch` akan melakukan pencarian berurutan terhadap setiap elemen dalam array dan menghitung berapa kali angka 4 ditemukan. Hasilnya disimpan dalam variabel `occurrences`.

Terakhir, hasil perhitungan jumlah kemunculan angka 4 ditampilkan dengan menggunakan perintah `cout`. Program kemudian mengembalikan nilai 0, menandakan bahwa program telah selesai dijalankan dengan sukses.

**HASIL OUTPUT**
```C++
Banyaknya angka 4 dalam data adalah: 4

--------------------------------
Process exited after 0.06717 seconds with return value 0
Press any key to continue . . .
```

**DAFTAR PUSTAKA**
