#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int matriks[3][3];

    cout << "Masukkan data matriks (3 baris, 3 kolom):\n";
    for (int i = 0; i < 3; i++) {
        cout << "Masukkan data matriks baris " << i + 1 << ": ";
        cin >> matriks[i][0] >> matriks[i][1] >> matriks[i][2];
    }

    cout << "\nData yang Anda masukkan:\n";
    for (int i = 0; i < 3; i++) {
        cout << setw(6) << matriks[i][0]
             << setw(6) << matriks[i][1]
             << setw(6) << matriks[i][2] << endl;
    }

    return 0;
}