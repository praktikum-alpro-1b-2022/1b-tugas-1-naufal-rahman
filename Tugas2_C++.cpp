#include <iostream>
using namespace std;

int main(){
    int x=20; int y=22;

    cout << "Pertukaran data nilai variabel x dan y." << endl;
    cout << " " << endl;
    cout << "==Algoritma 1==" <<endl;
    cout << "" <<endl;
    cout << "Nilai awal variabel x berisi angka: " << x << endl;
    cout << "Nilai awal variabel y berisi angka: " << y << endl;
    cout << " " << endl;
    cout << "Nilai akhir variabel x berisi angka: " << y << endl;
    cout << "Nilai akhir variabel y berisi angka: " << x << endl;

    cout << "" <<endl;
    cout << "==Algoritma 2==" <<endl;
    cout << "" <<endl;
    int numx = 99;
    int numy = 100;
    int temp;

    cout << "Nilai awal numx: "<< numx <<endl;
    cout << "Nilai awal numy: "<< numy <<endl;
    cout << "" <<endl;

    temp = numx;
    numx = numy;
    numy = temp;

    cout << "Nilai akhir numx: " << numx <<endl ;
    cout << "Nilai akhir numy: " << numy << endl;

return 0;
}
