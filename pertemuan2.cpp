#include <iostream>
using namespace std;

int main () {
    int nilai = 90;
    cout << "Nilai:" << nilai << endl;
    cout << "Alamat dari nilai: " << &nilai << endl;

    int* ptr = &nilai;
    cout << "Isi nilai pointer: " << *ptr << endl;
    cout << "Isi alamat pointer: " << ptr << endl;

    *ptr = 80;
    cout << "Isi pointer setelah diubah nilainya: " << *ptr << endl;
    cout << "Isi nilai setelah diubah: " << nilai << endl;

    int* ptrnull = nullptr;
    if (ptrnull != nullptr) {
        cout << *ptrnull << endl;
    } else {
        cout << "Pointer kosong. ";
    }

}