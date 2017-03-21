//FRONT13R src: http://bit.ly/2mRGar1         // submit : https://dropitto.me/latihan-pl-tekom-a
#include <iostream>
#include <conio.h>
#include <string.h>
#include <windows.h>
using namespace std;

class Decode{
public:
    void dec_20to99(int n){
        dec_1to11(n/10);
        cout << "puluh ";
        dec_1to11(n%10);
    }

    void dec_12to19(int n){
        dec_1to11(n%10);
        cout << "belas ";
    }

    void dec_1to11(int n){
        if (n==1){
            cout << "Satu ";
        } else if (n==2){
            cout << "Dua ";
        } else if (n==3){
            cout << "Tiga ";
        } else if (n==4){
            cout << "Empat ";
        } else if (n==5){
            cout << "Lima ";
        } else if (n==6){
            cout << "Enam ";
        } else if (n==7){
            cout << "Tujuh ";
        } else if (n==8){
            cout << "Delapan ";
        } else if (n==9){
            cout << "Sembilan ";
        } else if (n==10){
            cout << "Sepuluh ";
        } else if (n==11){
            cout << "Sebelas ";
        }
    }

    void dec_0(){
        cout << "Nol ";
    }

    void dec_Bil(int n){
        if (n==0){
            dec_0();
        } else if (n>0 && n<=11){
            dec_1to11(n);
        } else if (n>11 && n<20){
            dec_12to19(n);
        } else if (n>=20 && n<100){
            dec_20to99(n);
        } else {
            cout << "\n  (out of range)";
        }
    }
};

class Encode{
public:
    int a, b, hasil;

    void enc_atr0(string n0, string n1){
        if (n0=="dua"){
            a = 2;
        } else if (n0=="tiga"){
            a = 3;
        } else if (n0=="empat"){
            a = 4;
        } else if (n0=="lima"){
            a = 5;
        } else if (n0=="enam"){
            a = 6;
        } else if (n0=="tujuh"){
            a = 7;
        } else if (n0=="delapan"){
            a = 8;
        } else if (n0=="sembilan"){
            a = 9;
        } else {
            a = 0;
        }

        if (n1=="belas"){
            a = a+10;
        } else if (n1=="puluh"){
            a = a*10;
        } else {
            //
        }
    }

    void enc_atr2(string n2){
        if (n2=="nol"){
            b = 0;
        } else if (n2=="satu"){
            b = 1;
        } else if (n2=="dua"){
            b = 2;
        } else if (n2=="tiga"){
            b = 3;
        } else if (n2=="empat"){
            b = 4;
        } else if (n2=="lima"){
            b = 5;
        } else if (n2=="enam"){
            b = 6;
        } else if (n2=="tujuh"){
            b = 7;
        } else if (n2=="delapan"){
            b = 8;
        } else if (n2=="sembilan"){
            b = 9;
        } else if (n2=="sepuluh"){
            b = 10;
        } else if (n2=="sebelas"){
            b = 11;
        } else {
            b = 0;
        }
    }
};

int main(){
    int pilihan;
    do {
        cout << "Program Mengubah Angka Menjadi Huruf" << endl;
        cout << "Pilihan :" << endl
             << "1. Ubah Angka Menjadi Huruf" << endl
             << "2. Ubah Huruf Menjadi Angka" << endl
             << "3. Exit" << endl
             << "Masukkan pilihan anda : ";
        cin >> pilihan;

        if(pilihan==1){
            Decode Bil1;
            int bilangan;
            cout << "\nMasukkan angka yang ingin diubah : ";
            cin >> bilangan;
            cout << "  Terbilang : ";
            Bil1.dec_Bil(bilangan);
            cout << "\n====================================" << endl << endl;
            getch();
            system("cls");
        } else if (pilihan==2){
            Encode Bil2;
            string atr[3];
            char temp[128];
            int len, hasilnya;
            cout << "\nTips : " << endl;
            cout << "1. Gunakan lowercase (huruf kecil)" << endl;
            cout << "2. Gunakan \"-\" jika ingin mengosongi atribut" << endl;
            cout << "Masukkan huruf yang ingin diubah : " << endl;
            cout << "  Terbilang 1 : ";
            cin >> atr[0];
            cout << "  Terbilang 2 : ";
            cin >> atr[1];
            cout << "  Terbilang 3 : ";
            cin >> atr[2];

            if(atr[0]!="" && atr[1]!="" && atr[2]!=""){
                Bil2.enc_atr0(atr[0],atr[1]);
                Bil2.enc_atr2(atr[2]);
                Bil2.hasil = Bil2.a+Bil2.b;
            } else if (atr[0]!="" && atr[1]!="" && (atr[2]=="" || atr[2]=="-")){
                Bil2.enc_atr0(atr[0],atr[1]);
                Bil2.hasil = Bil2.a+Bil2.b;
            } else if (atr[0]!="" && (atr[1]=="" || atr[1]=="-") && (atr[2]=="" || atr[2]=="-")){
                Bil2.enc_atr2(atr[0]);
                Bil2.hasil = Bil2.b;
            }
            cout << "Hasil konversi : " << Bil2.hasil << endl;
            cout << "====================================" << endl << endl;
            getch();
            system("cls");
        } else if(pilihan==3){
            cout << "\nProgram dihentikan...";
            getch();
        } else {
            cout << "Oke sip..\nB aja.";
            getch();
            system("cls");
        }
    } while (pilihan!=0);
    return 0;
}
