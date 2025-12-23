#include <iostream>
using namespace std;

int main() {
    int mat1[3][3], mat2[3][3], result[3][3] = {0};
    
    // Input matriks pertama
    cout << "Masukkan elemen matriks pertama (3x3):" << endl;
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cin >> mat1[i][j];
        }
    }
    
    // Input matriks kedua
    cout << "Masukkan elemen matriks kedua (3x3):" << endl;
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cin >> mat2[i][j];
        }
    }
    
    // Perkalian matriks
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            for(int k = 0; k < 3; k++) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
    
    // Output hasil
    cout << "Hasil perkalian matriks:" << endl;
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}