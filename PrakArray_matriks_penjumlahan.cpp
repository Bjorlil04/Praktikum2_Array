#include <iostream>
using namespace std;

int main() {
    int A[3][3], B[3][3], C[3][3];

    cout << "Masukkan elemen matriks A (3x3):\n";
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cin >> A[i][j];
        }
    }

    cout << "Masukkan elemen matriks B (3x3):\n";
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cin >> B[i][j];
        }
    }

    // Penjumlahan matriks
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    cout << "\nHasil Penjumlahan Matriks:\n";
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }

    // Menggunakan sizeof()
    int jumlahElemen = sizeof(A) / sizeof(A[0][0]);
    cout << "\nJumlah elemen matriks: " << jumlahElemen << endl;

    return 0;
}
