#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};  // Array dengan 10 elemen
    
    // Menghitung panjang array menggunakan sizeof
    int length = sizeof(arr) / sizeof(arr[0]);
    
    // Output panjang array
    cout << "Panjang array adalah: " << length << endl;
    
    // Output elemen array untuk verifikasi
    cout << "Elemen array: ";
    for(int i = 0; i < length; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    return 0;
}