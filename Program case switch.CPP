#include <iostream.h>
#include <conio.h>
#include <stdio.h>

main()
{
char kode;

cout<<"=========================================" <<endl;
cout<<"=           ANEKA MACAM RUMUS           =" <<endl;
cout<<"=                                       =" <<endl;
cout<<"=========================================" <<endl;

cout<<"=      Pilih Rumus yang di Inginkan     ="<<endl;
cout<<"========================================="<<endl;
cout<<"  1. Rumus Menghitung Luas Segitiga"<<endl;
cout<<"  2. Rumus Menghitung Luas Balok"<<endl;
cout<<"  3. Rumus Menghitung Konversi suhu"<<endl;
cout<<"  4. Rumus Menghitung Luas Lingkaran"<<endl;
cout<<"  5. Rumus untuk mengetahui Tahun Kabisat"<<endl;
cout<<"==========================================" <<endl;
cout<<"Pilih Rumus yang di Inginkan : " ;
cin>>kode;

    switch (kode)
   {
    case'1':
   float Alas,Tinggi,Luas_Segitiga;
       cout<<"=================================" <<endl;
      cout<<"=    Menghitung Luas Segitiga   =" <<endl;
      cout<<"=================================" <<endl;
      cout<<"Masukan Nilai Alas Segitiga : ";
      cin>>Alas;
        cout<<"Masukan Nilai Tinggi Segitiga : ";
      cin>>Tinggi;
      Luas_Segitiga=0.5*Alas*Tinggi;
      cout<<"Nilai Luas Segitiga adalah : "<<Luas_Segitiga<<endl;
      cout<<"================================="<<endl;
      break;

   case'2':
      float a,b,c,d;
       cout<<"=========================="<<endl;
      cout<<"= Menghitung Luas Balok  ="<<endl;
        cout<<"=========================="<<endl;
        cout<<" Masukkan Nilai panjang           : ";
      cin>>a;
        cout<<" Masukkan Nilai lebar             : ";
      cin>>b;
        cout<<" Masukkan Nilai tinggi            : ";
      cin>>c;
        d=2*(a*b)+2*(a*c)+2*(b*c);
      cout<<"==========================" <<endl;
        cout<<" Luas Permukaan Balok adalah      : "<<d<<endl;
      cout<<"=========================="<<endl;
      break;

   case'3':
 int celcius;
 float reamur, farenheit, kelvin;
         cout<<"==========================="<<endl;
      cout<<"= Menghitung Konvesi Suhu ="<<endl;
      cout<<"==========================="<<endl;
      cout<<"Masukkan suhu dalam celcius : "<<endl;
      cin>>celcius;
      cout<<"===========================" <<endl;
      reamur= 4/5*celcius;
      farenheit= (9/5*celcius)+32;
      kelvin= celcius+273;
      cout<<"<celcius ke reamur : "<<reamur<<endl;
      cout<<"<celcius fahrenheit : "<<farenheit<<endl;
      cout<<"<celcius ke kelvin : "<<kelvin<<endl;
      cout<<"==========================="<<endl;
      break;
   case'4':
     double diameter, luas;
       cout<<"==============================="<<endl;
      cout<<"=  MENGHITUNG LUAS LINGKARAN  ="<<endl;
      cout<<"===============================" <<endl;
      cout<<"diameter lingkaran    : ";
       cin>>diameter;
       luas = diameter*diameter*22/7*1/4;
      cout<<"===============================" <<endl;
       cout<<"luas lingkaran         : "<<luas<<endl;
      cout<<"==============================="<<endl;
         break;
   case'5':
   int awal, akhir, tahun;
   cout<<"===============================" <<endl;
   cout<<"=  Menghitung Tahun Kabisat   =" <<endl;
   cout<<"===============================" <<endl;
   cout<<"Masukkan Tahun awal : ";
   cin>>awal;
   cout<<"Masukkan Tahun akhir : ";
   cin>>akhir;
   cout<<"===============================" <<endl;
   cout<<"Tahun kabisat antara "<<awal<<" dan "<<akhir<<" adalah";
   cout<<endl<<endl;

   for(tahun=awal; tahun<=akhir; tahun++)
   {
   if((tahun%4==0)||(tahun%400==0)&&(tahun%100!=0))
   cout<<tahun<<endl;
   else
   cout<<"";
   }
   break;
   default:
      cout<<"Pilihan yang anda masukkan salah" <<endl;
      break;


              }
      getche();
       }

