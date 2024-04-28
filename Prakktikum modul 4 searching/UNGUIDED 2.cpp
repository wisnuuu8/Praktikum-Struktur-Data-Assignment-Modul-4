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

