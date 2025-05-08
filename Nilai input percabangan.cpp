#include <iostream>
using namespace std;

int main() {
    int nilai;
    cout << "Masukkan nilai anda: ";
    cin >> nilai; 

    if (nilai > 100 || nilai < 0) {
        cout << "Maaf, nilai yang anda masukkan salah." << endl;
    } 
    else if (nilai >= 71) {
        cout << "Selamat, anda lulus. ";
        if (nilai >= 91) {
            cout << "Grade A" << endl;
        }
         
        else if (nilai >= 81) {
            cout << "Grade B" << endl;
        } 
        else {
            cout << "Grade C" << endl;
        }
    } 
    
    else {
        cout << "Maaf, anda tidak lulus. ";

        if (nilai >= 61) {
            cout << "Grade D" << endl;
        } 
        else {
            cout << "Grade E" << endl;
        }
    } 
}