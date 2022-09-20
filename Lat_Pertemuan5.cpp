#include <iostream>
#include <stdio.h>

using namespace std;

int main ()
{
    //cout <<"hrllo world" << endl;
    //<printf("Hello");

/*Bahasa iostream
    int a;
    cout <<"\n Msukan Angka :";
    cin >> a;
    cout <<"Angka Anda"<<endl;
Bahasa studio.h
    printf(\nMasukan angka kedua:");
    scanf("%d",&a);
    printf(Angka kedua: %d", a);

    int a, b, c, hasil;
//data Mhs, Matkul, Asalkota;

    int x;
    int y;
    int z;

    x = 2;
    y = 4;
    z = 8;
//cara 1
    cout <<a+b+c <<endl;

//cara 2
    hasil=a+b+c;
    cout <<"Hasil :" <<hasil <<endl;
*/
    cout <<"Menghitung Luas Lingkaran" << endl;
    cout <<"Luas Lingkaran Menggunakan Phi : 3.14" <<endl;

    float phi, r1, r2, hasil;
    phi=3.14;
    r1=7;
    r2=7;
    hasil=phi*r1*r2;
    cout <<"3.14 x 7 x 7 = " << hasil <<endl;

    cout <<"\nMenghitung Luas Lingkaran" <<endl;
    cout <<"Luas Lingkaran Menggunakan phi : 22/7"<<endl;

    float phi1, r3, r4, hasil1;
    phi1=22/7;
    r3=7;
    r4=7;
    hasil1= (phi1*r3*r4)/7;
    cout << "22/7 x 7 x 7 =  " <<hasil1 << endl;

    return 0;

}
