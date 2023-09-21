#include <iostream>
#include <cstdlib>
#include <windows.h>

using namespace std;

int main (){
    int decision, seconds;

    cout<< "Selamat datang di Terapi Relaksasi Bernafas!"<< "\n" << "Silahkan ketik 1 untuk memulai terapi!" << endl;
    cin >> decision;


    if (decision == 1){
        for (short seconds=4;seconds > 0;seconds--){
            system ("cls");
            cout << "Tarik nafas anda selama: " << seconds <<endl;
            system ("TIMEOUT 1");
        }
        for (short seconds=7;seconds > 0;seconds--){
            system ("cls");
            cout << "Tahan nafas anda selama: " << seconds <<endl;
            system ("TIMEOUT 1");
        }
        for (short seconds=8;seconds > 0;seconds--){
            system ("cls");
            cout << "Buang nafas anda selama: " << seconds <<endl;
            system ("TIMEOUT 1");
        }
        cout << "Terapi Selesai!" << "\n" << "Terima kasih telah menggunakan Terapi Relaksasi Bernafas! " << endl;
    }
    else {
        cout << "Baiklah, sampai berjumpa lain kali!" << endl;
    }
    return 0;
}
